#include <iostream>

using namespace std;

int length(char *str);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    char str[1000];
    for (int i = 0; i < T; i++)
    {
        cin >> str;
        cout << str[0] << str[length(str) - 1] << "\n";
    }
    return 0;
}

int length(char *str)
{
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
        else if (str[i] == '\0')
            break;
    }
    return count;
}