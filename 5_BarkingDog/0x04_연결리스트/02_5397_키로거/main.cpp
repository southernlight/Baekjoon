#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        list<char> L = {};
        auto cur = L.end();
        for (auto c : S)
        {
            if (c == '<' || c == '>' || c == '-')
            {
                if (c == '<' && cur != L.begin())
                    cur--;
                else if (c == '>' && cur != L.end())
                    cur++;
                else if (c == '-' && cur != L.begin())
                {
                    cur--;
                    cur = L.erase(cur);
                }
            }
            else
                L.insert(cur, c);
        }
        for (auto c : L)
            cout << c;
        cout << '\n';
    }
}