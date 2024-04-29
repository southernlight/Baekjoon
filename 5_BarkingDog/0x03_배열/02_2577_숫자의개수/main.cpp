#include <bits/stdc++.h>

using namespace std;

int freq[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B >> C;
    string S = to_string(A * B * C);
    for (auto c : S)
        freq[c - '0']++;
    for (int i = 0; i < 10; i++)
        cout << freq[i] << "\n";
    return 0;
}