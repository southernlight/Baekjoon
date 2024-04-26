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
        if (i != strlen(word) - 1)
        {
            if (word[i] == 'c')
            {
                if (word[i + 1] == '=' || word[i + 1] == '-')
                {
                    i++;
                    count++;
                }
                else
                {
                    count++;
                }
            }
            else if (word[i] == 'd')
            {
                if (word[i + 1] == 'z' && (i + 1) < strlen(word) - 1)
                {
                    if (word[i + 2] == '=')
                    {
                        i += 2;
                        count++;
                    }
                }
                else if (word[i + 1] == '-')
                {
                    i++;
                    count++;
                }
                else
                {
                    count++;
                }
            }

            else if (word[i] == 'l' || word[i] == 'n')
            {
                if (word[i + 1] == 'j')
                {
                    i++;
                    count++;
                }
                else
                {
                    count++;
                }
            }

            else if (word[i] == 's' || word[i] == 'z')
            {
                if (word[i + 1] == '=')
                {
                    i++;
                    count++;
                }
                else
                {
                    count++;
                }
            }
            else
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }

    cout << count;
    return 0;
}