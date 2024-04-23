#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int total;
    bool find = false;
    int i, j;

    for (i = (N / 5); i >= 0; i--)
    {
        if (i * 5 > N)
            continue;
        else
        {
            for (j = 0; j <= (N / 3); j++)
            {
                total = i * 5 + j * 3;
                if (total == N)
                {
                    find = true;
                    break;
                }
            }
        }

        if (find)
            break;
    }

    if (find)
    {
        cout << i + j;
    }
    else
    {
        cout << -1;
    }

    return 0;
}