#include<iostream>
using namespace std;

class employee{

public: int id;
        float salary;

        employee(int xid){
            id=xid;
            salary=45; 
       }
        employee(){};//a default constructor is necessary as employee class will inherit the properties of programmer class , then the constructor called will be of employee class

};

class programmer:employee{

public:
     programmer(int yid){
        id = yid;
     }
    int language_code=9;
    void getdata(){
        cout<<id<<endl;
    }

};

int main(){

employee harry(1),rohan(2);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;

programmer skillF(3);

cout<<skillF.language_code<<endl;
//cout<<skillF.id<<endl;   for this we need to inherit employee class publicaly
skillF.getdata();

    return 0;
}