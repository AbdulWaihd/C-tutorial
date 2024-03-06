#include <iostream>
using namespace std;
int main()
{

    int a = 4, b;

    cout << sizeof(a) << endl; // 4

    char name = 'a';
    cout<<sizeof(name)<<endl;

    bool flag;
    a == name ? flag = true : flag = false;
    cout << flag << endl;

    cout << (&a) << endl;

    return 0;
}