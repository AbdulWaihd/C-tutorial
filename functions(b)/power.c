#include <stdio.h>
#include <math.h>
int main()
{
    int a;

    printf("Enter your number");
    scanf("%d", &a);

    int power = pow(a,5);
    printf("the power of given  is : %d", power);

    return 0;
}

