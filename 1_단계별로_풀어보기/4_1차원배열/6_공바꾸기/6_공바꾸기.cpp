#include <iostream>

using namespace std;
int N, M;
int *basket;

void swap(int i, int j);
void print_basket();
void init_basket();

int main()
{
    int i, j;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    init_basket();
    for (int k = 0; k < M; k++)
    {
        cin >> i >> j;
        swap(i, j);
    }
    print_basket();

    return 0;
}

void swap(int i, int j)
{
    int temp;
    temp = basket[i - 1];
    basket[i - 1] = basket[j - 1];
    basket[j - 1] = temp;
}

void print_basket()
{
    for (int i = 0; i < N; i++)
        cout << basket[i] << " ";
}

void init_basket()
{
    basket = new int(N);

    for (int i = 0; i < N; i++)
        basket[i] = i + 1;
}