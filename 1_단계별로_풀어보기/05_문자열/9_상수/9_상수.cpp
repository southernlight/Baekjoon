#include <iostream>

using namespace std;
void flip(char *str);
int main()
{
    char A[4];
    char B[4];
    cin >> A >> B;
    flip(A);
    flip(B);
    int num_A = atoi(A);
    int num_B = atoi(B);

    cout << ((num_A > num_B) ? num_A : num_B);
    return 0;
}

void flip(char *str)
{
    char temp = str[0];
    str[0] = str[2];
    str[2] = temp;
}