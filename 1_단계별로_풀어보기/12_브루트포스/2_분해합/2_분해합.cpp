#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int tmp = N;
    int degree = 0;

    while (tmp > 0)
    {
        tmp /= 10;
        degree++;
    }
    if (N > pow(10, degree - 1) - 1 + 9 * (degree - 2))
        degree--;
    else
        degree -= 2;

    int decom;
    int total_factor;

    int i;
    for (i = pow(10, degree); i <= N; i++)
    {
        decom = 0;
        int temp = i;
        int k = degree;
        total_factor = 0;
        while (k >= 0)
        {

            int quo = temp / pow(10, k);
            decom += quo * pow(10, k);
            temp = temp - quo * pow(10, k);
            k--;
            total_factor += quo;
        }

        if (N == decom + total_factor)
        {
            cout << decom;
            break;
        }
    }
    if (i == N + 1)
        cout << 0;

    return 0;
}