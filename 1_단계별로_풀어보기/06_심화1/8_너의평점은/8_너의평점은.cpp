#include <cstring>
#include <iostream>

using namespace std;
enum Credit
{
    AP,
    A,
    BP,
    B,
    CP,
    C,
    DP,
    D,
    P,
    F
};

int main()
{
    double scores[10] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0, 0.0};
    char subjects[101];
    double credit;
    char rank[3];
    double total = 0.0;
    double total_credit = 0.0;
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << fixed;
    cout.precision(8);

    for (int i = 0; i < 20; i++)
    {

        cin >> subjects;
        cin >> credit;
        cin >> rank;

        if (strcmp("A+", rank) == 0)
        {
            total += credit * scores[AP];
            total_credit += credit;
        }

        else if (strcmp("A0", rank) == 0)
        {
            total += credit * scores[A];
            total_credit += credit;
        }
        else if (strcmp("B+", rank) == 0)
        {
            total += credit * scores[BP];
            total_credit += credit;
        }
        else if (strcmp("B0", rank) == 0)
        {
            total += credit * scores[B];
            total_credit += credit;
        }
        else if (strcmp("C+", rank) == 0)
        {
            total += credit * scores[CP];
            total_credit += credit;
        }
        else if (strcmp("C0", rank) == 0)
        {
            total += credit * scores[C];
            total_credit += credit;
        }

        else if (strcmp("D+", rank) == 0)
        {
            total += credit * scores[DP];
            total_credit += credit;
        }

        else if (strcmp("D0", rank) == 0)
        {
            total += credit * scores[D];
            total_credit += credit;
        }

        else if (strcmp("P", rank) == 0)
        {
            total += credit * scores[P];
        }

        else if (strcmp("F", rank) == 0)
        {
            total += credit * scores[F];
            total_credit += credit;
        }
    }

    std::cout << total / total_credit;

    return 0;
}