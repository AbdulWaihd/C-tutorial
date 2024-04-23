#include<iostream>
using namespace std;
class animal{
public:
    virtual   void speak(){
            cout<<"animal speaks"<<endl;

        }
};
class dog:public animal{
public: 
        void speak() {
            cout<<"dog speaks"<<endl;
        }
};
int main(){

animal *a;
dog d;
a=&d;
a->speak();

    return 0;
}