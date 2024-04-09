#include <iostream>

using namespace std;

int main()
{
    int T;
    int A, B;
    cin >> T;
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << "\n";
    }
    return 0;
}