#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
   virtual void display()
    {
        cout << "displaying the variable of base class: " << var_base << endl;
    }
};
class derived_class : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying the variable of base class: " << var_base << endl;
        cout << "displaying the variable of derived class: " << var_derived << endl;
    }
};

int main()
{
    baseclass *base_class_ptr;
    baseclass obj_base;

    derived_class obj_derived;
    base_class_ptr = &obj_derived;// base class pointer can be pointed from derived class pointer
    base_class_ptr->var_base = 34;
    //  base_class_ptr->var_derived= 34;   // not valid 
    base_class_ptr->display();// dsiplay fn of base class will be called not of derived class


}