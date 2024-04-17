#include <iostream>

using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    char str[200];

    while (1)
    {
        cin.getline(str, 200);
        cout << str << "\n";
    }

    return 0;
}