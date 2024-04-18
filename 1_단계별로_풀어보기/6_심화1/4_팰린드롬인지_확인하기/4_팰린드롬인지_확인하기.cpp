#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char word[101];
    int pal = 1;
    cin >> word;
    int k = strlen(word) / 2 - 1;
    for (int i = 0; i <= k; i++)
    {
        if (word[i] != word[strlen(word) - 1 - i])
            pal = 0;
    }

    cout << pal;

    return 0;
}