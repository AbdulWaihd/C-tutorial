//given a boolean 2d array where eachg row is sorted . find the row with manimum number of 1s?
#include <iostream>
#include <vector>
#include <climits>  // Include for INT_MIN
using namespace std;



/*  0 1 1 1
    0 0 0 0   
    0 0 1 1

maxones = minvalue
maxones=-1
columns 4
numberof ones =4-1=3
3 > min_value
maxones = 3
maxonesrow=0 */

int maximum_ones_row(vector<vector<int>> &v) {
    int maxones = INT_MIN;
    int maxonesrow = -1;
    int columns = v[0].size();

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == 1) {
                int numberofones = columns - j;
                if (numberofones > maxones) {
                    maxones = numberofones;
                    maxonesrow = i;
                }
                break;
            }
        }
    }
    return maxonesrow;
}

int main() {
    int n, m
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }cout<<endl;
    }

    int res = maximum_ones_row(vec);  // Call the function with the vector
    cout << res << endl;

    return 0;
}
