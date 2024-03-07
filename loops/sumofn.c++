#include <iostream>
using namespace std;
int main()
{

    int n, sum, i;
    cin >> n;
    sum = 0;
    i = 1;// loop variable
    while (i <= n) //condition
    {
        sum = sum + i;
        i++;// updating loop variable
    }

    cout << sum << endl;

    return 0;
}