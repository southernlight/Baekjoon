#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int A;
    char val;
    ifstream fin;
    fin.open("test.txt");
    while (!fin.eof())
    {
        fin >> A;
        cout << A << endl;
        cout << "called" << endl;
        // fin >> val;
        // cout << val << endl;
        // cout << "called" << endl;
    }
    return 0;
}
