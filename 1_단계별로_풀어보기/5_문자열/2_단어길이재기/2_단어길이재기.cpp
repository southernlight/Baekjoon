#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char word[101];
    cin >> word;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            count++;
        }
        else if (word[i] == '\0')
            break;
    }
    cout << count;
    return 0;
}