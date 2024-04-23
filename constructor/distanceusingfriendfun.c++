#include<iostream>
#include<cmath> // Include cmath for sqrt function
using namespace std;

class point {
    int x, y;

public:
    point(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "Your coordinates are: (" << x << " , " << y << ")" << endl;
    }

    // Declare the friend function to calculate distance
    friend float distance( point& p1,  point& p2);
};

// Define the friend function to calculate distance
float distance( point& p1,  point& p2) {
    // Calculate the distance using the distance formula
    float dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return dist;
}

int main() {
    point p(1, 1);
    p.display();

    point q(5, 4);
    q.display();

    // Call the friend function to calculate distance between p and q
    float dist = distance(p, q);
    cout << "Distance between the points: " << dist << endl;

    return 0;
}
