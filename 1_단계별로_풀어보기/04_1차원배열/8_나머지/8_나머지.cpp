#include <iostream>

using namespace std;

int num_array[10];
int num_array2[10];
int n = 0;

void init_array();
int check(int num);

int main()
{
    init_array();
    for (int i = 0; i < 10; i++)
    {
        if (check(num_array[i]) == false)
            num_array2[n++] = num_array[i];
    }

    cout << n;
    return 0;
}

int check(int num)
{
    for (int i = 0; i < n; i++)
    {
        if (num_array2[i] == num)
            return true;
    }

    return false;
}

void init_array()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> num_array[i];
        num_array[i] %= 42;
    }
}