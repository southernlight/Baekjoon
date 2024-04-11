#include <iostream>

using namespace std;

int main()
{
    int N;
    int X;
    cin >> N >> X;

    int *ptr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> ptr[i];
    for (int i = 0; i < N; i++)
    {
        if (ptr[i] < X)
            cout << ptr[i] << " ";
    }

    return 0;
}