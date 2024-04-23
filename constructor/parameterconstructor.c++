#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex(int , int ); // constructor decleration
 
 /*a=x;
 b=y*/   // cant do this 
    void printnumber()
    {

        cout << "ur number is" << a << "+i" << b << endl;
    }
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{

    complex a(4, 5);           // implicit call
    complex b = complex(5, 7); // explicit call

    a.printnumber();
    b.printnumber();

    return 0;
}