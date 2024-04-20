#include <iostream>

using namespace std;
void print_alphabets();
int alphabets[26];
char str[200];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin >> str;
    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = -1;
    }
    for (int i = 0; i < 200; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            n = str[i] - 'a';
            if (alphabets[n] == -1)
            {
                alphabets[n] = i;
            }
        }

        else if (str[i] == '\0')
            break;
    }
    print_alphabets();

    return 0;
}
void print_alphabets()
{
    for (int i = 0; i < 26; i++)
        cout << alphabets[i] << " ";
}
