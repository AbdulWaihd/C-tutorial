#include <iostream>
using namespace std;

class number
{

    int a;

public:
    // default constructor
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // copy constructor
    // if copy constructor is removed it will also work bcz a default copy constructor is used by compilers
    number(number &obj)
    {
        cout << "copy constructor is called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number of this object is " << a << endl;
    }
};

int main()
{

    number x(2), y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble like x or y or z
    // so copy contructor is used

    number z1(x);
    z1.display();
    z2 = z; // copy constructor is not called bcz the object is already created & we r just assigning the vALUE
    z2.display();

    number z3 = z; // copy constructor is called BCZ object is now created
    z3.display();
    return 0;
}