#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int A, B;
    char val;
    ifstream fin;
    fin.open("test2.txt");
    while (!fin.eof())
    {
        // fin >> A;
        // fin >> B;
        // cout << A + B << endl;
        fin >> val;
        cout << val << endl;
    }
    return 0;
}
