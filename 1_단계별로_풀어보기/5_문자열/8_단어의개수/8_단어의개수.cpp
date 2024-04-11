#include <iostream>
using namespace std;
int main()
{
    char str[1000000];
    cin.getline(str, 1000000);
    int i = 0;
    while (1)
    {
        if (str[i] == '\0')
            break;

        i++;
    }

    return 0;
}
