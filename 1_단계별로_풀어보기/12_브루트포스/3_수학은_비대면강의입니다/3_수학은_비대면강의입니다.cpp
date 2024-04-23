#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int x = -999; x <= 999; x++)
    {
        if (a != 0 && b != 0 && d != 0 && e != 0)
        {
            int y = (c - a * x) / b;
            if (d * x + e * y == f)
                cout << x << " " << y;
        }
        else
        {
            if (a == 0)
            {
                int y = (f - d * x) / e;
                if (b * y == c)
                    cout << x << " " << y;
            }
            else if (b == 0)
            {
                if (a * x == c)
                {
                    int y = (f - d * x) / e;
                    cout << x << " " << y;
                }
            }
            else if (d == 0)
            {
                int y = (c - a * x) / b;
                if (e * y == f)
                    cout << x << " " << y;
            }
            else if (e == 0)
            {
                if (d * x == f)
                {
                    int y = (c - a * x) / b;
                    cout << x << " " << y;
                }
            }
        }
    }
    return 0;
}