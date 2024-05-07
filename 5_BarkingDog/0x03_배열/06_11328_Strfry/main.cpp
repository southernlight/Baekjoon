#include <bits/stdc++.h>

using namespace std;
int N;
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
        int occur1[26] = {
            0,
        };
        int occur2[26] = {
            0,
        };
        possible = true;
        cin >> first >> second;
        int first_len = strlen(first);
        int second_len = strlen(second);
        if (first_len != second_len)
            possible = false;
        else
        {
            for (int j = 0; j < first_len; j++)
                occur1[first[j] - 'a']++;
            for (int j = 0; j < second_len; j++)
                occur2[second[j] - 'a']++;

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