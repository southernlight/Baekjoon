#include <iostream>

using namespace std;
int main()
{
    int X;
    cin >> X;
    int total = 1;
    int numer = 1;
    int deno = 1;
    int line = 1;

    while (total != X + 1)
    {
        if (line % 2 == 1)
        {
            for (int i = 0; i < line && total != X + 1; i++)
            {
                // cout << line - i << "/" << i + 1 << " -> ";
                numer = line - i;
                deno = i + 1;
                total++;
            }
        }

        else
        {
            for (int i = 0; i < line && total != X + 1; i++)
            {
                // cout << i + 1 << "/" << line - i << " -> ";
                numer = i + 1;
                deno = line - i;
                total++;
            }
        }
        line++;
    }
    cout << numer << "/" << deno;
    return 0;
}