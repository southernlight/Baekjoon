#include <iostream>

using namespace std;

int main()
{
    int a1, a0;
    int c, n0;

    cin >> a1 >> a0 >> c >> n0;

    int f = a1 * n0 + a0;
    int g = n0;

    if (f <= c * g && a1 <= c)
        cout << 1 << endl;

    else
        cout << 0 << endl;

    return 0;
}
