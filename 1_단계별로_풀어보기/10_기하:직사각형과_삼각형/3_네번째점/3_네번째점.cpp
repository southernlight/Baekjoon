#include <iostream>

using namespace std;
int main()
{
    int x, y;
    int arr_x[1000] = {
        0,
    };
    int arr_y[1000] = {
        0,
    };
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        arr_x[x] += 1;
        arr_y[y] += 1;
    }

    int i, j;
    for (i = 0; i < 1000; i++)
    {
        if (arr_x[i] == 1)
        {
            break;
        }
    }
    for (j = 0; j < 1000; j++)
    {
        if (arr_y[j] == 1)
        {
            break;
        }
    }

    cout << i << " " << j;

    return 0;
}
