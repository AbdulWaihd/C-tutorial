#include<iostream>
using namespace std;

class student{
protected:   
    int rollnumber;
public:
        void set_rollnumber(int);
        void get_rollnumber(void);
};

void student::set_rollnumber(int r){
    rollnumber=r;
}
void student :: get_rollnumber(){
    cout<<"the roll number is: "<<rollnumber<<endl;

}

class exame:public student{
    protected:
               float maths,physics;
public:             
          void set_marks(float , float);
          void get_marks(void);
};

void exame::set_marks(float m1, float m2){
    maths =m1;
    physics = m2;
}
void exame::get_marks(){
cout<<"the marks obt in maths are: "<<maths <<endl;
cout<<"the marks obt in physics are  :"<<physics<<endl;

}

class result:public exame{
    float percnetage;
public:  
       void display_result(){
        get_rollnumber();
        get_marks();
        cout<<"your percentage is  "<<(maths+physics)/2<<endl;
       }
};
int main(){

result wahid;
wahid.set_rollnumber(211);
wahid.set_marks(90.43,91);

wahid.display_result();
    return 0;
}