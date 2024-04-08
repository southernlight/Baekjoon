#include <iostream>

using namespace std;

int main()
{
    int X;
    int N;
    int total = 0;
    int a, b;

    cin >> X >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        total += a * b;
    }

    if (total == X)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}