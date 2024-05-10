#include <bits/stdc++.h>
using namespace std;
int N, K, len;
int pre[5001], nxt[5001];
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin >> K;
    for (int i = 1; i <= N; i++)
    {
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
    }
    len = N;
    int cur = 1;
    int jump = 1;
    while (len > 0)
    {
        if (jump == K)
        {
            v.push_back(cur);
            nxt[pre[cur]] = nxt[cur];
            pre[nxt[cur]] = pre[cur];
            jump = 1;
            len--;
        }
        else
            jump++;
        cur = nxt[cur];
    }
    cout << "<";
    for (int i = 0; i < v.size(); i++)
    {
        (i != v.size() - 1) ? cout << v[i] << ", " : cout << v[i];
    }
    cout << ">";
}