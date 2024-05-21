#include <bits/stdc++.h>
using namespace std;
int N, M;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    cin >> N >> M;
    deque<int> D;
    for (int i = 1; i <= N; i++)
        D.push_back(i);
    cout << endl << idx << endl;
    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;

        int ind = 0;
        for (; ind < D.size(); ind++)
        {
            if (n == D[ind])
                break;
        }
        while (D.front() != n)
        {
            if (ind <= D.size() / 2) // left_shift
            {
                int pushNumber = D.front();
                D.pop_front();
                D.push_back(pushNumber);
                ans++;
            }
            else // right_shift
            {
                int pushNumber = D.back();
                D.pop_back();
                D.push_front(pushNumber);
                ans++;
            }
        }
        D.pop_front();
    }
    std::cout << ans;

    return 0;
}