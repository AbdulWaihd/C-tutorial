#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are u" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho" << endl;
    }
};
class derived : public base1, public base2
{
    int a;
    // for solving ambiguity
public:
    void greet()
    {
        base1::greet();
    }
};
int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    derived g;
    // g.greet()  //ambigious
    g.greet();
}