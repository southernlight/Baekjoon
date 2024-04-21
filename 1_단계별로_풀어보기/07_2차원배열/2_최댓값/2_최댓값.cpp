#include <iostream>
using namespace std;

int main()
{
    int arr[9][9];
    int max = -1;

    int i, j;
    int max_row = 0, max_col = 0;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << max << "\n";
    cout << max_row + 1 << " " << max_col + 1;

    return 0;
}