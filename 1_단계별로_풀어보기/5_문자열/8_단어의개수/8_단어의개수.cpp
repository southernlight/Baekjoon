#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char str[1000000];
    cin.getline(str, 1000000);
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
    cout << count + 1;

    return 0;
}
