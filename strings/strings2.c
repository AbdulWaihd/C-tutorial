#include<stdio.h>
int main(){
char name[100];
printf("enter ur name\n");
fgets(name,100,stdin);
printf("you enterd : ");
puts(name);

return 0;

}