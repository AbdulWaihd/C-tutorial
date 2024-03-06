#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "enter number a" << endl;
    cin >> a;
    cout << "enter number b" << endl;
    cin >> b;

   c = a;
    a = b;
    b = c;
    
    //a = c;
    //b = a;
    //c = b;
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;

    return 0;
}