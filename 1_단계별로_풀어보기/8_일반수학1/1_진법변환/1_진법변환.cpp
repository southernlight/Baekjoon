#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

char N[100];
int B;
int values[200];

void init_values();

int main()
{
    cin >> N >> B;
    int total = 0;

    init_values();

    int a;
    int exp;
    for (int i = 0; i < strlen(N); i++)
    {
        exp = strlen(N) - 1 - i;
        if (N[i] >= 'A' && N[i] <= 'Z')
            a = values[N[i]];
        else
            a = N[i] - '0';

        total += a * pow(B, exp);
    }

    cout << total;

    return 0;
}

void init_values()
{
    for (char c = 'A'; c <= 'Z'; c++)
        values[c] = (int)c - (int)'A' + 10;
}
