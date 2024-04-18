#include <cstring>
#include <iostream>

using namespace std;
char word[100];
int main()
{
    cin >> word;
    int count = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == '=')
        {
            if (word[i - 1] == 'z')
            {
                if (i <= 1)
                    continue;
                else if (word[i - 2] == 'd')
                {
                    count--;
                    continue;
                }
            }
            else
                continue;
        }
        else if (word[i] == '-')
            continue;
        else if (word[i] == 'j')
        {
            if (i != 0 && (word[i - 1] == 'l' || word[i - 1] == 'n'))
                continue;
            count++;
        }
        else
        {
            count++;
        }
    }

    cout << count;
    return 0;
}