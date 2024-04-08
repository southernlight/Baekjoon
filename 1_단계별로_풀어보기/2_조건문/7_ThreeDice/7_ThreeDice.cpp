#include <iostream>

using namespace std;

int main()
{
    int money;
    int max = 0;
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    if (num[0] == num[1] && num[1] == num[2])
        money = 10000 + num[0] * 1000;
    else if (num[0] == num[1])
        money = 1000 + num[0] * 100;
    else if (num[1] == num[2])
        money = 1000 + num[1] * 100;
    else if (num[2] == num[0])
        money = 1000 + num[2] * 100;
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (num[i] > max)
                max = num[i];
        }

        money = max * 100;
    }

    cout << money;
}