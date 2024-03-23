#include <iostream>
using namespace std;
int main()
{
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

    int r2, c2;
    cout << "enter number of rows of matrixB" << endl;
    cin >> r2;
    cout << "enter number of columns of matrix B" << endl;
    cin >> c2;
    int B[r2][c2];
    cout << "enter elements " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cin >> B[i][j];
        }
    }

    if (c1 != r2)   //r1*c1  r2*c2 ----->  c1=r2(for matrix multiplications)  ------>resultant order of matrix (r1*c2)
    {
        cout << "matrix Multipication not possible" << endl;
    }
   
    int C[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < r2; k++)
            { // k<r2 or c1   // multiplication traversal
                value = value + A[i][k] * B[k][j];
            }
            C[i][j] =value ;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
    cout << endl;
   }
   

    return 0;
}