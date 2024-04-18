#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int dots_side = 2;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        dots_side += pow(2, i);
    }

    cout << dots_side * dots_side;

    return 0;
}