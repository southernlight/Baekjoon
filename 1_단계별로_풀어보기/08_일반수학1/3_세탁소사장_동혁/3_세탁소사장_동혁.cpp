#include <iostream>

using namespace std;
int T;
void printQDNP(int C);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    int C;

    for (int i = 0; i < T; i++)
    {
        cin >> C;
        printQDNP(C);
        cout << "\n";
    }

    return 0;
}

void printQDNP(int C)
{
    const int Q = 25;
    const int D = 10;
    const int N = 5;
    const int P = 1;
    int q = 0, d = 0, n = 0, p = 0;

    q = C / Q;
    C %= Q;
    cout << q << " ";
    d = C / D;
    C %= D;
    cout << d << " ";
    n = C / N;
    C %= N;
    cout << n << " ";
    p = C / P;
    C %= P;
    cout << p << " ";
}