#include <cstring>
#include <iostream>

using namespace std;
int IsGroup(char *vocab);
int main()
{
    int N;
    int total = 0;
    char vocab[101];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> vocab;
        total += IsGroup(vocab);
    }
    cout << total;

    return 0;
}

int IsGroup(char *vocab)
{
    int index = 0;
    while (vocab[index] != '\0')
    {
        char c = vocab[index];
        if (c == vocab[index + 1])
            index++;
        else
        {
            int n = strlen(vocab);
            for (int i = index + 1; i < n; i++)
            {
                if (vocab[i] == c)
                    return 0;
            }
            index++;
        }
    }
    return 1;
}
