#include <iostream>

using namespace std;

int N;
int B;
char values[50] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void init_values();
void convert();
int main()
{
    cin >> N >> B;
    convert();
    return 0;
}

void init_values()
{
    ;
}
void convert()
{
    int res;
    res = N % B;
    if (N < B)
    {
        cout << values[res];
    }

    else
    {
        N /= B;
        convert();
        cout << values[res];
    }
}