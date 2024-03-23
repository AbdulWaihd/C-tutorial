// rotation of vector by 90 degree without using other matrix
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate_array(vector<vector<int>> &vec)
{
    int n = vec.size();
    // transpose without using other matrix i.e we can do it by swapping upper and lower triangular matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }

    // reverse
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
    return;
}
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int> (n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    rotate_array(vec) ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
