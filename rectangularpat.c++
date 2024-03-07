#include <iostream>
using namespace std;
int main()
{

    int r, c;
    cout << "enter number of columns" << endl;
    cin >> c;
    cout << "enter number of rows" << endl;
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}