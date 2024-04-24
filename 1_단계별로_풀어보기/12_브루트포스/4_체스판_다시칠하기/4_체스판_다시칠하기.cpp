#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int N, M;
char **Board;
int check(int start_row, int start_col);
void initBoard();
int main()
{
    cin >> N >> M;
    initBoard();

    int min = N * M;
    int num = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            num = check(i, j);
            if (num <= min)
                min = num;
        }
    }

    std::cout << min;

    return 0;
}

void initBoard()
{
    Board = new char *[N];
    for (int i = 0; i < N; i++)
        Board[i] = new char[M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Board[i][j];
        }
    }
}

int check(int start_row, int start_col)
{
    int min_total = INT_MAX;
    int end_row = 0;
    int end_col = 0;

    if (start_row + 8 > N)
    {
        start_row = N - 8;
        end_row = N - 1;
    }
    else
    {
        end_row = start_row + 7;
    }
    if (start_col + 8 > M)
    {
        start_col = M - 8;
        end_col = M - 1;
    }
    else
    {
        end_col = start_col + 7;
    }

    const char color[2] = {'B', 'W'};

    for (int color_start = 0; color_start < 2; color_start++)
    {
        int total = 0;
        for (int i = start_row; i <= end_row; i++)
        {

            int row = i - start_row;
            for (int j = start_col; j <= end_col; j++)
            {
                int col = j - start_col;
                if (Board[i][j] != color[(row + col + color_start) % 2])
                    total++;
            }
        }
        min_total = min(min_total, total);
    }

    return min_total;
}
