#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        list<char> L = {};
        list<char>::iterator t = L.end();
        string input_keys;
        cin >> input_keys;
        for (auto c : input_keys)
        {
            if (c == '<' || c == '>' || c == '-')
            {
                if (c == '<' && t != L.begin())
                    t--;
                else if (c == '>' && t != L.end())
                    t++;
                else if (c == '-' && t != L.begin())
                {
                    t--;
                    t = L.erase(t);
                }
            }

            else
            {
                L.insert(t, c);
            }
        }

        for (auto c : L)
            cout << c;
        cout << "\n";
    }
    return 0;
}