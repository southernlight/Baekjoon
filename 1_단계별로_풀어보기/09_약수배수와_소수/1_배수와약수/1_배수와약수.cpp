#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        cin >> num1 >> num2;

        if ((num1 + num2) == 0)
            break;

        if (num1 < num2)
        {
            if (num2 % num1 == 0)
                cout << "factor\n";
            else
                cout << "neither\n";
        }
        else
        {
            if (num1 % num2 == 0)
                cout << "multiple\n";
            else
                cout << "neither\n";
        }
    }
    return 0;
}