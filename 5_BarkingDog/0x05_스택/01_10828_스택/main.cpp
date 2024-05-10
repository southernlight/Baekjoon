#include <bits/stdc++.h>
using namespace std;
int N;
stack<int> S;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string command;
        cin >> command;
        if (command == "push")
        {
            int arg;
            cin >> arg;
            S.push(arg);
        }
        else if (command == "pop")
        {
            if (S.empty())
                cout << -1 << '\n';
            else
            {
                cout << S.top() << '\n';
                S.pop();
            }
        }
        else if (command == "size")
        {
            cout << S.size() << '\n';
        }
        else if (command == "empty")
        {
            (S.empty()) ? cout << 1 << '\n' : cout << 0 << '\n';
        }
        else if (command == "top")
        {
            if (S.empty())
                cout << -1 << '\n';
            else
                cout << S.top() << '\n';
        }
    }
    return 0;
}