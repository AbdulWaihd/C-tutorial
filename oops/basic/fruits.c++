#include <iostream>
using namespace std;

class fruit
{

public:
    string name;
    string colour;
};

int main()
{

    fruit apple; // creating object of type fruit

    apple.name = "APPLE";
    apple.colour = "RED";

    cout << apple.name << "-" << apple.colour << endl;

    // another way of defining an object

    fruit *mango = new fruit();

    mango->name = "MANGO";
    mango->colour = "YELLOW";

    cout << mango->name << "-" << mango->colour << endl;

    return 0;
}