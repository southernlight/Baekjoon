#include <iostream>

using namespace std;

int T;

int length(char *str);
void printNtimes(char *str, int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char str[30];
    int n;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cin >> str;
        printNtimes(str, n);
    }
    return 0;
}

int length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void printNtimes(char *str, int n)
{
    int len = length(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << str[i];
        }
    }
    cout << "\n";
}