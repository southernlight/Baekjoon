#include <iostream>

using namespace std;
int main()
{
    const int n = 6;
    int arr_b[n] = {1, 1, 2, 2, 2, 8};
    int arr_w[n];
    for (int i = 0; i < n; i++)
        cin >> arr_w[i];

    for (int i = 0; i < n; i++)
        cout << arr_b[i] - arr_w[i] << " ";
}