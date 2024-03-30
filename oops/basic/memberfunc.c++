#include<iostream>
using namespace std;
class part{

    int modelnumber, partnumber;
    float cost;

public:
       void setpart(int mn,int pn,float c){

        modelnumber=mn;
        partnumber=pn;
        cost=c;
       }

       void showpart(){
        cout<<"model: "<<modelnumber<<endl;
        cout<<"part: "<<partnumber<<endl;
        cout<<"cost: "<<cost<<endl;
       }

};

int main(){
    part p1;
    p1.setpart(63421,4,2.5);                  //caling member function
    p1.showpart();                  //caling member function

    return 0;
}
