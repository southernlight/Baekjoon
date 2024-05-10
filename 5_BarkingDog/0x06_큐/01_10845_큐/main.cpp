#include <bits/stdc++.h>
using namespace std;
int N;
queue<int> Q;
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
            Q.push(arg);
        }
        else if (command == "pop")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if (command == "size")
            cout << Q.size() << "\n";
        else if (command == "empty")
            (Q.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
        else if (command == "front")
        {
            if (Q.empty())
                cout << -1 << "\n";
            else
                cout << Q.front() << "\n";
        }
        else if (command == "back")
        {
            if (Q.empty())
                cout << -1 << "\n";
            else
                cout << Q.back() << "\n";
        }
    }

    return 0;
}