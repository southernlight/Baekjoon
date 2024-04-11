#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int *basket = new int[N];

    int first, last, input;

    for (int i = 0; i < M; i++)
    {
        cin >> first >> last >> input;
        for (int j = first - 1; j < last; j++)
        {
            basket[j] = input;
        }
    }

    for (int i = 0; i < N; i++)
        cout << basket[i] << " ";
    return 0;
}