#include <iostream>
using namespace std;

bool is_prime(int num);
int main()
{
    int M, N;
    cin >> M >> N;
    int total = 0;
    int min = 0;

    for (int i = M; i <= N; i++)
    {
        if (is_prime(i))
        {
            if (total == 0)
                min = i;
            total += i;
        }
    }

    if (total > 0)
    {
        cout << total << "\n";
        cout << min;
    }
    else
    {
        cout << -1;
    }
    return 0;
}

bool is_prime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}
