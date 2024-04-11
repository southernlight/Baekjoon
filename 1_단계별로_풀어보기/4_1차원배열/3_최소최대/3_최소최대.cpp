#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int *ptr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ptr[i];
    }

    int max = ptr[0];
    int min = ptr[0];
    for (int i = 0; i < N; i++)
    {
        if (ptr[i] > max)
            max = ptr[i];
        if (ptr[i] < min)
            min = ptr[i];
    }

    cout << min << " " << max;
    return 0;
}