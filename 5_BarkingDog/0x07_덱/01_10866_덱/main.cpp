#include <bits/stdc++.h>
using namespace std;

int N;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    string command;
    deque<int> D;
    for (int i = 0; i < N; i++)
    {
        cin >> command;
        if (command == "push_front")
        {
            int n;
            cin >> n;
            D.push_front(n);
        }
        else if (command == "push_back")
        {
            int n;
            cin >> n;
            D.push_back(n);
        }
        else if (command == "pop_front")
        {
            if (D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.front() << '\n';
                D.pop_front();
            }
        }
        else if (command == "pop_back")
        {
            if (D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.back() << '\n';
                D.pop_back();
            }
        }
        else if (command == "size")
        {
            cout << D.size() << '\n';
        }
        else if (command == "empty")
        {
            if (D.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (command == "front")
        {
            if (D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.front() << '\n';
            }
        }
        else if (command == "back")
        {
            if (D.empty())
                cout << -1 << '\n';
            else
            {
                cout << D.back() << '\n';
            }
        }
    }
    return 0;
}