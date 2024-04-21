#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3];
    while (1)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        // cout << arr[0] << arr[1] << arr[2] << "\n";

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;

        if (arr[0] + arr[1] <= arr[2])
            cout << "Invalid\n";
        else
        {
            if (arr[0] == arr[1] && arr[1] == arr[2])
                cout << "Equilateral\n";
            else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
                cout << "Isosceles\n";
            else
                cout << "Scalene\n";
        }
    }

    return 0;
}