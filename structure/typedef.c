#include <stdio.h>
#include <string.h>
typedef struct student_details
{

    int roll;
    float cgpa;
    char name[100];

}stu;


int main()
{

    // struct student_details s1 gets replaced by stu s1
    stu s1;
    s1.roll = 1664;
    s1.cgpa = 9.7;
    // s1.name="wahid"; wrong

    strcpy(s1.name, "wahid");
    printf("student name is %s\n", s1.name);
    printf("student roll nmber is %d\n", s1.roll);

    printf("student cgpa is %f\n", s1.cgpa);

    return 0;
}