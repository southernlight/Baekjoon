#include <bits/stdc++.h>
using namespace std;

queue<int> Q;
int N;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++)
        Q.push(i);

    while (Q.size() > 1)
    {
        Q.pop();
        int i = Q.front();
        Q.pop();
        Q.push(i);
    }

    cout << Q.front();

    return 0;
}