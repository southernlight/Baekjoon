#include <iostream>

using namespace std;

int main()
{
    int N;
    int v;
    int count = 0;
    cin >> N;

    int *ptr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> ptr[i];
    cin >> v;

    for (int i = 0; i < N; i++)
    {
        if (ptr[i] == v)
            count++;
    }
    cout << count;

    return 0;
}