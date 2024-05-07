#include <bits/stdc++.h>

using namespace std;

int main()
{
    char first[1001], second[1001];
    char occur[26] = {
        0,
    };
    cin >> first >> second;
    for (int i = 0; i < strlen(first); i++)
        occur[first[i] - 'a']++;
    for (int i = 0; i < strlen(second); i++)
        occur[second[i] - 'a']--;
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        while (occur[i] != 0)
        {
            if (occur[i] > 0)
            {
                occur[i]--;
                count++;
            }
            else
            {
                occur[i]++;
                count++;
            }
        }
    }
    cout << count;

    return 0;
}