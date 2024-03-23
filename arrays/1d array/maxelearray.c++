#include <iostream>
using namespace std;
int main()
{

    int arr[] = {3, 6, 8, 18, 9, 11};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}