#include <bits/stdc++.h>
//commit
//commit2
using namespace std;
int N;
bool occur1[26];
bool occur2[26];
bool possible;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    char first[1001];
    char second[1001];
    for (int i = 0; i < N; i++)
    {

        possible = true;
        cin >> first >> second;
        int first_len = strlen(first);
        int second_len = strlen(second);
        if (first_len != second_len)
            possible = false;
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
                    possible = false;
                    break;
                }
            }
        }
        if (possible)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}