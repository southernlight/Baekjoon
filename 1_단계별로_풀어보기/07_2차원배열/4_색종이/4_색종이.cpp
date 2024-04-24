#include <iostream>

using namespace std;
int arr[100][100];

void paste(int x, int y);
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        paste(x, y);
    }

    int area = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
            area += arr[i][j];
    }
    cout << area;

    return 0;
}

void paste(int x, int y)
{
    for (int i = x; i < x + 10; i++)
    {
        for (int j = y; j < y + 10; j++)
        {
            if (arr[i][j] == 0)
                arr[i][j] = 1;
        }
    }
}