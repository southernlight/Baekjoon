#include <bits/stdc++.h>
using namespace std;

void parse(string &tmp, deque<int> &d)
{
    int cur = 0;
    for (int i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i] == ',')
        {
            d.push_back(cur);
            cur = 0;
        }
        else
        {
            cur = 10 * cur + (tmp[i] - '0');
        }
    }
    if (cur != 0)
        d.push_back(cur);
}

void print_result(deque<int> &d)
{
    cout << '[';
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i];
        if (i + 1 != d.size())
            cout << ',';
    }
    cout << "]\n";
}

int T;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--)
    {
        deque<int> DQ;
        int rev = 0;
        int n;
        bool isWrong = false;
        string query, tmp;
        cin >> query >> n >> tmp;
        parse(tmp, DQ);
        for (auto f : query)
        {
            if (f == 'R')
                rev = 1 - rev;
            else if (f == 'D')
            {
                if (DQ.empty())
                {
                    isWrong = true;
                    break;
                }
                if (!rev)
                    DQ.pop_front();
                else
                    DQ.pop_back();
            }
        }

        if (isWrong)
            cout << "error" << '\n';
        else
        {
            if (rev)
                reverse(DQ.begin(), DQ.end());
            print_result(DQ);
        }
    }

    return 0;
}
