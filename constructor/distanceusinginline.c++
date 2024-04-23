#include <iostream>
#include <cmath> // Include the cmath library for square root function
using namespace std;

class point {
    int x, y;

public:
    point(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "Your coordinates are: (" << x << ", " << y << ")" << endl;
    }

    double distance(point otherPoint) {  // It means the function expects an object of type point to be passed as an argument when it is called.
        // Calculate the distance between two points using the distance formula
        return sqrt(pow(x - otherPoint.x, 2) + pow(y - otherPoint.y, 2));
    }
};

int main() {
    point p(1, 1);
    p.display();

    point q(5, 4);
    q.display();

    // Calculate the distance between points p and q
    double dist = p.distance(q);
    cout << "Distance between the two points: " << dist << endl;

    return 0;
}
