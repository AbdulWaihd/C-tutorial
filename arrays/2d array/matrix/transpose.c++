#include<iostream>
using namespace std;
int main(){

     int r1, c1;
    cout << "enter number of rows of matrix A" << endl;
    cin >> r1;
    cout << "enter number of columns of matrix A" << endl;
    cin >> c1;

    int A[r1][c1];
    cout << "enter elements " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cin >> A[i][j];
        }
    }

for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {

            cout << A[j][i];
        }cout<<endl;
    }

return 0;
}