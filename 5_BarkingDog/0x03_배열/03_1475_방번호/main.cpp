#include <bits/stdc++.h>

using namespace std;

int freq[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    for (auto c : s)
        freq[c - '0']++;

    if ((freq[6] + freq[9]) % 2 == 0)
    {
        freq[6] = (freq[6] + freq[9]) / 2;
        freq[9] = freq[6];
    }
    else
    {
        freq[6] = (freq[6] + freq[9]) / 2 + 1;
        freq[9] = freq[6];
    }

    int max = freq[0];
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > max)
            max = freq[i];
    }
    cout << max;

    return 0;
}