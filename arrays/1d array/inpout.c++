#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   cout << "enter ur vowels:" << endl;
    char vowels[5];
    //for (int i = 0; i < 5; i++)
   // {
//
   //     cin >> vowels[i];
   
   for(char &element :vowels){
    cin>>element;
   }
   
    

    for (int i = 0; i < 5; i++)
    {

        cout << vowels[i] << setw(5) << "";
    }

    return 0;
}