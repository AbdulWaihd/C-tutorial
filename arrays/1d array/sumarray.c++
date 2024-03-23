#include <iostream>
using namespace std;
int main()
{

    int array[] = {1, 2, 3, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << "the sum of array is:" << sum << endl;

    return 0;
} 