#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while (1)
    {
        int arr[100000];
        int k = 0;
        cin >> n;
        if (n == -1)
            break;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                arr[k++] = i;
        }
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        if (n == sum)
        {
            cout << n << " = ";
            for (int i = 0; i < k; i++)
            {
                if (i == k - 1)
                    cout << arr[i] << "\n";
                else
                {
                    cout << arr[i] << " + ";
                }
            }
        }

        else
        {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}