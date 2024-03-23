#include<iostream>
using namespace std;
int main(){

    //using for loop
int array[]={1,2,3,4};
int size = sizeof(array)/sizeof(array[0]);

for (int i = 0; i < size  ; i++){

   cout<<array[i]<<endl;
}


//using for each loop
for(int ele:array){

cout<<ele<<endl;

}

//using while loop
int index = 0;
while (index<size)
{
    cout<<array[index]<<endl;
    index++;
}




return 0;
}
