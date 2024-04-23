#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    // Constructor to initialize to 0
    Int() : value(0) {}

    // Constructor to initialize to a specific int value
    Int(int val) : value(val) {}

    // Display the value
    void display()  {
        cout << value;
    }

    // Add two Int values and return the result
    Int add( Int& other)  {
        Int result(value + other.value);
        return result;
    }
};

int main() {
    // Create one uninitialized Int
    Int int3;

    // Create two initialized Int values
    Int int1(5);
    Int int2(7);

    // Add the two initialized values and store the result in the uninitialized value
   int3 = int1.add(int2);

    // Display the result
    cout << "Result of adding int1 and int2: ";
    int3.display();
    cout << endl;

    return 0;
}
