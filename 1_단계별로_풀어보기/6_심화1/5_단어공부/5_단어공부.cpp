#include <iostream>
#define MAX_NUM 1000001
#define ARRAY_NUM 130
#define DIFF 32

using namespace std;
int main()
{

    int alphabets_count[ARRAY_NUM] = {
        0,
    };
    char word[MAX_NUM];
    cin >> word;
    for (int i = 0; i < MAX_NUM && word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z') //+32 해줘야한다.
        {
            alphabets_count[word[i]]++;
        }

        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            alphabets_count[word[i] - DIFF]++;
        }
    }

    char max = 0;
    bool same = true;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        if (alphabets_count[c] > 0 && alphabets_count[c] >= alphabets_count[max])
        {
            if (alphabets_count[c] == alphabets_count[max])
            {
                max = '?';
                break;
            }
            max = c;
        }
    }
    cout << max;
    return 0;
}