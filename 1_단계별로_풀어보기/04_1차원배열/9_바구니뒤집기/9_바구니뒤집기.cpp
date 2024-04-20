#include <iostream>

using namespace std;
int N, M;
int *basket;
void init_basket();
void print_basket();
void swap(int i, int j);
void flip(int start, int end);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_basket();

    cin >> M;
    int start, end;
    for (int i = 0; i < M; i++)
    {
        cin >> start >> end;
        flip(start, end);
    }
    print_basket();

    return 0;
}

void init_basket()
{
    cin >> N;
    basket = new int[N];
    for (int i = 0; i < N; i++)
        basket[i] = i + 1;
}

void print_basket()
{
    for (int i = 0; i < N; i++)
        cout << basket[i] << " ";
    cout << "\n";
}

void flip(int start, int end)
{
    start -= 1;
    end -= 1;
    int k = 0;
    int mid = (start + end) / 2 + 1;
    for (int i = start; i < mid; i++)
    {
        swap(i, end - k);
        k++;
    }
}

void swap(int i, int j)
{
    int temp;
    temp = basket[i];
    basket[i] = basket[j];
    basket[j] = temp;
}