#include <iostream>

using namespace std;
int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min(min(x, w - x), min(y, h - y));

    return 0;
}