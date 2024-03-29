#include <stdio.h>
#include<string.h>
struct student

{
    int rollno;
    float cgpa;
    char name[100];
};

int main()
{

    struct student s1;
    s1.rollno = 1664;
    s1.cgpa = 9.5;
   // s1.name = "wahid";
   strcpy(s1.name,"wahid");

   printf("student name is %s.His roll number is %d and his cgpa is %f",s1.name,s1.rollno,s1.cgpa);
    return 0;
}