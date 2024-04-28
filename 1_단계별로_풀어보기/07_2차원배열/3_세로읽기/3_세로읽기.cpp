#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
char arr[5][16];

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // for (int i = 0; i < 5; i++)
    // {
    //     fill(arr[i], arr[i] + 15, '\0');
    // }

    char buffer[16];

    for (int i = 0; i < 5; i++)
    {
        cin.getline(buffer, sizeof(buffer));
        for (int j = 0; j < strlen(buffer); j++)
        {
            arr[i][j] = buffer[j];
        }
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((arr[j][i] >= 'A' && arr[j][i] <= 'Z') || (arr[j][i] >= 'a' && arr[j][i] <= 'z') ||
                (arr[j][i] >= '0' && arr[j][i] <= '9'))
                cout << arr[j][i];
        }
    }
    return 0;
}