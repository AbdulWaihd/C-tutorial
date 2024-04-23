#include<iostream>
using namespace std;

/*
student---> test
student---> sports
test ---> result
sports--->result
*/

class student {

    int roll_no;
public:
        void  set_number(int a){
            int roll_no =a;
        }
        void print_number(void){
            cout<<"your roll number is "<<roll_no<<endl;

        }
};

class test: virtual public student {
    protected:
              float maths, physics;
public:
         void set_marks(float m1 , float m2 ){
                maths = m1;
                physics=m2;
         }

         void print_marks(){
            cout<<"your marks are given below: "<<endl<<"maths: "<<maths<<endl<<"physics: "<<physics<<endl;

         }
};

class sports : virtual public student{
    protected:
            float score;
public: 
      void set_score(float sc){
        score=sc;
      }

      void print_score(void ){
        cout<<"your PT score is: "<<score<<endl;

      }
};

class result: public test,public sports{

 private: 
       float total;
 public : 
             void display(void){
                total = maths + physics+score;

             print_number();
             print_marks();
             print_score();

             cout<<"your total score is: "<<total <<endl;
             }
};
int main(){
result wahid;
wahid.set_number(110014);
wahid.set_marks(94.3,88.5);
wahid.set_score(9);

wahid.display();

    return 0;
}