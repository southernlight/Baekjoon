#include <iostream>

using namespace std;
int N;
int main()
{
    cin >> N;
    int i = 1;
    int min = 0;
    int max = 1;

    while (1)
    {
        if (N >= min && N <= max)
            break;
        else
        {
            min = max + 1;
            max = max + 6 * i;
            i++;
        }
    }

    cout << i;

    return 0;
}