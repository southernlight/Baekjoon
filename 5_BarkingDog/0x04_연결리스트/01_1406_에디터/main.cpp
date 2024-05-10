#include <bits/stdc++.h>
using namespace std;

list<char> L;
string S;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;
    for (auto c : S)
        L.push_back(c);
    auto cur = L.end();

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        char command;
        cin >> command;
        if (command == 'L' && cur != L.begin())
            cur--;
        else if (command == 'D' && cur != L.end())
            cur++;
        else if (command == 'B' && cur != L.begin())
        {
            cur--;
            cur = L.erase(cur);
        }
        else if (command == 'P')
        {
            char c;
            cin >> c;
            L.insert(cur, c);
        }
    }

    for (auto c : L)
        cout << c;

    return 0;
}