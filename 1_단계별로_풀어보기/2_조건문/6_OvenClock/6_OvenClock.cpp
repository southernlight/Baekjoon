#include <iostream>

using namespace std;

int main()
{
    int h, m;
    int min;
    cin >> h >> m;
    cin >> min;

    while (min >= 60)
    {
        min -= 60;
        h++;
        if (h > 23)
            h = 0;
    }

    m += min;
    if (m < 60)
        cout << h << " " << m;
    else
    {
        if (h == 23)
            cout << 0 << " " << m - 60;
        else
            cout << h + 1 << " " << m - 60;
    }

    return 0;
}