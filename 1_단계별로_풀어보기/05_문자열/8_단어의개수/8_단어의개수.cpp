#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char str[1000001];
    cin.getline(str, sizeof(str));

    int count = 0;
    int i = 0;
    while (1)
    {
        if (str[i] == '\0')
            break;
        if (str[i] == ' ')
        {
            if (i != 0 && str[i + 1] != '\0')
                count++;
        }
        i++;
    }
    if (strlen(str) == 1 && str[0] == ' ')
        cout << 0;
    else
        cout << count + 1;

    return 0;
}
