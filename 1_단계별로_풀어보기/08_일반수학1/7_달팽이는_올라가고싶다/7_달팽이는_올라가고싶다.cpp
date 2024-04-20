#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;

    int m_perday = A - B;
    int days = V / m_perday;
    int current = days * m_perday;

    while (current > (V - A) && (current - m_perday) >= (V - A))
    {
        current -= m_perday;
        days -= 1;
    }

    cout << days + 1;

    return 0;
}