#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;
    list<char> L;
    list<char>::iterator t;

    for (auto c : S)
        L.push_back(c);
    t = L.end();

    int M;
    string command;
    cin >> M;
    cin.ignore();
    for (int i = 0; i < M; i++)
    {
        getline(cin, command);
        if (command[0] == 'L' && t != L.begin())
            t--;
        else if (command[0] == 'D' && t != L.end())
            t++;
        else if (command[0] == 'B' && t != L.begin())
        {
            t--;
            t = L.erase(t);
        }
        else if (command[0] == 'P')
        {
            L.insert(t, command[2]);
        }
    }

    for (auto c : L)
        cout << c;

    return 0;
}