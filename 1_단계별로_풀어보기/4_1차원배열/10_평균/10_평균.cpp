#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    float M;
    float total = 0;
    float *score = new float[N];
    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        if (score[i] > M)
            M = score[i];
    }

    for (int i = 0; i < N; i++)
    {
        score[i] = score[i] / M * 100;
        total += score[i];
    }

    cout << total / N;

    return 0;
}