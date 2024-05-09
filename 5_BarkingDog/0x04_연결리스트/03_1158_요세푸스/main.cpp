#include <bits/stdc++.h>

using namespace std;
int pre[5001], nxt[5001];
int N, K, len = 0;
vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    len = N;

    for (int i = 1; i <= N; i++)
    {
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
    }

    int i = 1;
    for (int cur = 1; len != 0; cur = nxt[cur])
    {
        if (i == K)
        {
            nxt[pre[cur]] = nxt[cur];
            pre[nxt[cur]] = pre[cur];
            len--;
            i = 1;
            v.push_back(cur);
        }
        else
            i++;
    }

    cout << "<";
    for (int i = 0; i < v.size(); i++)
    {
        (i == v.size() - 1) ? cout << v[i] : cout << v[i] << ", ";
    }
    cout << ">";
    return 0;
}