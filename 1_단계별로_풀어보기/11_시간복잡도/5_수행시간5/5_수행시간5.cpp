#include <iostream>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long total = 0;
    for (long long i = 1; i <= n - 2; i++)
    {
        total += (n * (n - 1 - i) - ((n - 1) * n / 2 - i * (i + 1) / 2));
    }

    cout << total << "\n" << 3;
    return 0;
}
