#include <iostream>

using namespace std;
int main()
{
    int N;
    cin >> N;

    char c;
    char array[100];
    for (int i = 0; i < N; i++)
    {
        cin >> c;
        array[i] = c;
    }

    int total = 0;
    for (int i = 0; i < N; i++)
    {
        total += (array[i] - '0');
    }
    cout << total;

    return 0;
}