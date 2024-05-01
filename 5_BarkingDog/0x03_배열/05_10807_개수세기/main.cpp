#include <bits/stdc++.h>

#define FEMALE 0
#define MALE 0

using namespace std;

int N;
int K;
int male[7];
int female[7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        int sex, grade;
        cin >> sex >> grade;
        if (sex == FEMALE)
            female[grade]++;
        else
            male[grade]++;
    }

    for (int grade = 1; grade <= 6; grade++)
    {
        ans += ((female[grade] + 1) / 2);
        ans += ((male[grade] + 1) / 2);
    }
    cout << ans;

    return 0;
}