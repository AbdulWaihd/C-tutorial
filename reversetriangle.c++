
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = n; i>=1; i--)
    {

        for (int j = i; j >=1; j--)  //number of columns is equal to row number so j<= i
        {

            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}