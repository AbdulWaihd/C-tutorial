// make a program that input users name and print its length
#include <stdio.h>
int countlen(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {

        count++;
    }
    return count - 1;
}
int main()
{

    char name[100];
    fgets(name, 100, stdin);
    printf("%d", countlen(name));

    return 0;
}