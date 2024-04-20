#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int num;
    int total_count = 0;
    int count;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 2)
            total_count++;
    }

    cout << total_count;
    return 0;
}