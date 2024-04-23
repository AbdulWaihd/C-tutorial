/*

case 1:
class b: public a{
    order of execution : first a() then b()
};

case 2:
class a: public b, public c{

    order of execution -> b() then c() then a()
};

case 3:
class a: public b, virtual public c{

    order of execution -> c() then b () then a()
};
*/

#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "the base class 1 is called" << endl;
    }
    void printdata_base1(void)
    {
        cout << "the value of data 1 is : " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "the base class 2 is called" << endl;
    }
    void printdata_base2(void)
    {
        cout << "the value of data 2 is : " << data2 << endl;
    }
};

class derived :  public base1, virtual public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor is called" << endl;
    }
    void printdata_derived(void){
        cout<<"the value of derived1 and derived 2 is :"<< derived1<<"and"<<derived2<<endl;

    }

    };

    int main(){

derived wahid(1,2,3,4);

wahid.printdata_base1();

        return 0;

    }