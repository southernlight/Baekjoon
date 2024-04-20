#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int max_loc;
    int num_array[9];
    for (int i = 0; i < 9; i++)
        cin >> num_array[i];

    for (int i = 0; i < 9; i++)
    {
        if (num_array[i] > max)
        {
            max = num_array[i];
            max_loc = i;
        }
    }

    cout << max << "\n";
    cout << max_loc + 1;
    return 0;
}