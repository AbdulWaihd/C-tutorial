#include <iostream>
using namespace std;

class base
{

    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

// will define the functions declared above
void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : public base
{ // if we use private instead of public we cannot use setdata() just can use process() and dispaly()
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{ // if we use private instead of public we cannot use setdata() just can use process() and dispaly() so for using set data we need to declare itr in process()

    // setdat();
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "value of data 1 is " << getdata1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

// we are using getdata1() instead of simply using data1 bcz data1 is private in base class while data2 is public and data3 is define in derived class
int main()
{
    derived der;
    der.setdata(); // as setdata is public it is accessible in in the derived class
    der.process();
    der.display();

    return 0;
}