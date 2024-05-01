#include <bits/stdc++.h>

using namespace std;

int occur[2000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int idx;
        cin >> idx;
        occur[idx] = 1;
    }
    int x;
    cin >> x;
    for (int i = x - 1; i >= 1; i--)
    {
        if (occur[i] == 1 && occur[x - i] == 1 && i != x - i)
        {
            cnt++;
            occur[x - i] = 0;
        }
    }
    cout << cnt;
    return 0;
}