#include <iostream>
using namespace std;
int main()
{

    int array[] = {1, 44, 21, 65, 11, 63};
    int key = 11;
    int ans = -1;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            ans = i;
           
        }
    }

    cout << ans << endl;

    return 0;
}