#include <stdio.h>

//with argument and without return value

void printstar(int n)    //here it is declared(declaration)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');      //defnition(the actual implementation of function )
    }
   
}


int main()
{
int n;
printf("enter");
scanf("%d",&n);
printstar(n);           //function is called
return 0;

}