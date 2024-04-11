#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int students[30] = {
        0,
    };
    int n;
    for (int i = 0; i < 28; i++)
    {
        cin >> n;
        students[n - 1] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (students[i] == 0)
            cout << i + 1 << "\n";
    }

    return 0;
}