#include <iostream>

using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char str[101];

    while (!cin.eof())
    {
        cin.getline(str, sizeof(str));
        cout << str << "\n";
    }

    return 0;
}