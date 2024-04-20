#include <iostream>

using namespace std;

int main()
{
    int N;
    int K;
    cin >> N >> K;
    int array[10000];
    int pos = 0;
    int i;

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            array[pos++] = i;
        }
    }

    cout << array[K - 1];
    return 0;
}