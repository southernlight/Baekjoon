#include <cstring>
#include <iostream>
using namespace std;
char arr[5][15];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        fill(arr[i], arr[i] + 15, '\0');
    }

    char c;
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
            cout << arr[j][i];
        }
    }
    return 0;
}