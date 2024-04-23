#include<iostream>
using namespace std;

class point{

    int x,y;
public:
       point(int a ,int b){
        x=a;
        y=b;
       }
     void display(){
        cout<< "ur coordinates are:("<<x<<" , "<<y<<")"<<endl;
     }

};

int main(){

point p(1,1);
p.display();

point q(5,4);
q.display();



    return 0;
}