#include <bits/stdc++.h>
//commit
//commit2
using namespace std;
int N;
bool occur1[26];
bool occur2[26];

int main()
{
    cin >> N;
    char first[1001];
    char second[1001];
    for (int i = 0; i < N; i++)
    {
        cin >> first >> second;
        int first_len = strlen(first);
        int second_len = strlen(second);
        if (first_len != second_len)
        {
            cout << "Impossible\n";
        }

        else
        {
            for (int j = 0; j < first_len; j++)
                occur1[first[j] - 'a'] = true;
            for (int j = 0; j < second_len; j++)
                occur2[second[j] - 'a'] = true;

            for (int i = 0; i < 26; i++)
            {
                if (occur1[i] != occur2[i])
                {
                    ;
                }
            }
        }
    }

    return 0;
}