#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int first = num2 / 100;
    int second = (num2 - first * 100) / 10;
    int third = (num2 - first * 100 - second * 10);

    cout << third * num1 << endl;
    cout << second * num1 << endl;
    cout << first * num1 << endl;
    cout << num1 * (first * 100 + second * 10 + third) << endl;

    return 0;
}