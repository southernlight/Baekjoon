#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int card[100];
    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }

    int max = 0;
    int total = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                total = card[i] + card[j] + card[k];
                if (total >= max && total <= M)
                    max = total;
            }
        }
    }

    cout << max;
    return 0;
}