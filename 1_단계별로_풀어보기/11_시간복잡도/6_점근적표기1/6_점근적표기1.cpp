#include <iostream>

using namespace std;

int main()
{
    int a1, a2;
    int c, n0;

    cin >> a1 >> a2 >> c >> n0;

    int n = n0;
    while (1)
    {
        int f = c * n - (a1 * n + a2);
        n++;
    }

    return 0;
}
