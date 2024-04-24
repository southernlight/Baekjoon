#include <cstring>
#include <iostream>
char vocab[1000001];
int alphabetsCounts[100];

using namespace std;
bool same();
int main()
{
    const char diff = 'a' - 'A';

    cin >> vocab;
    for (int i = 0; i < strlen(vocab); i++)
    {
        if (vocab[i] >= 'A' && vocab[i] <= 'Z')
            alphabetsCounts[(int)vocab[i]]++;
        else if (vocab[i] >= 'a' && vocab[i] <= 'z')
            alphabetsCounts[(int)(vocab[i] - diff)]++;
    }

    if (same())
        cout << "?";
    else
    {
        char max = 'A';
        for (int i = (int)'A'; i <= (int)'Z'; i++)
        {
            if (alphabetsCounts != 0)
            {
                if (alphabetsCounts[i] > alphabetsCounts[max])
                    max = (char)i;
            }
        }
        cout << max;
    }

    return 0;
}

bool same()
{
    for (int i = (int)'A'; i <= (int)'Z'; i++)
    {
        if (alphabetsCounts[i] != 0)
        {
            for (int j = i + 1; j <= (int)'Z'; j++)
            {
                if (alphabetsCounts[i] == alphabetsCounts[j])
                    return true;
            }
        }
    }

    return false;
}