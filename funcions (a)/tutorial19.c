#include <stdio.h>


//with argument and with return value


int sum(int a , int b)     //here it is declared(declaration)   here it is a user defined function not a library function
{
    return a+b;
}



int main ()


{                              //defnition(the actual implementation of function )
int a , b , c ;                   
a=7;          //these are arguments
b=6;       //these are arguments
c=sum(a,b);    //return value will be 13
printf("the sum is %d\n",c); //function is called

return 0;
}