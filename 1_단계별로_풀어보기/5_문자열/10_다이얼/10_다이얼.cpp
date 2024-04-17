#include <iostream>
#include <string.h>

using namespace std;

int time_for_char(char c);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int time = 0;
    char str[20];
    cin >> str;
    for (int i = 0; i < 20; i++)
    {
        if (str[i] == '\0')
            break;
        time += time_for_char(str[i]);
    }

    cout << time;
    return 0;
}

int time_for_char(char c)
{
    if (c >= 'A' && c <= 'C')
    {
        return 3;
    }
    else if (c >= 'D' && c <= 'F')
    {
        return 4;
    }
    else if (c >= 'G' && c <= 'I')
    {
        return 5;
    }
    else if (c >= 'J' && c <= 'L')
    {
        return 6;
    }
    else if (c >= 'M' && c <= 'O')
    {
        return 7;
    }
    else if (c >= 'P' && c <= 'S')
    {
        return 8;
    }
    else if (c >= 'T' && c <= 'V')
    {
        return 9;
    }
    else if (c >= 'W' && c <= 'Z')
    {
        return 10;
    }

    return -1;
}