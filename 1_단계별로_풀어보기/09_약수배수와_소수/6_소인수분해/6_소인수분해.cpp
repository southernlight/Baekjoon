#include <iostream>

using namespace std;
void prime_factorization(int N);

int main()
{
    int N;
    cin >> N;
    prime_factorization(N);

    return 0;
}

void prime_factorization(int N)
{
    if (N == 1)
        ;
    else
    {
        int i;
        for (i = 2; i < N; i++)
        {
            if (N % i == 0)
                break;
        }
        cout << i << "\n";
        N /= i;
        prime_factorization(N);
    }
}