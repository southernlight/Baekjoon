#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    while (c >= a + b)
    {
        c--;
    }
    cout << a + b + c;
    return 0;
}