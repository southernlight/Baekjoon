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
    const int N = strlen(vocab);
    for (int i = 0; i < N; i++)
    {
        if (vocab[i] >= 'A' && vocab[i] <= 'Z')
            alphabetsCounts[(int)vocab[i]]++;
        else if (vocab[i] >= 'a' && vocab[i] <= 'z')
            alphabetsCounts[((int)(vocab[i] - diff))]++;
    }

    int max = 0;
    char max_alphabet;

    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (alphabetsCounts[i] > max)
        {
            max = alphabetsCounts[i];
            max_alphabet = (char)i;
        }
    }
    int count = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (max == alphabetsCounts[i])
            count++;
    }

    if (count > 1)
        cout << "?";
    else
        cout << max_alphabet;
    return 0;
}