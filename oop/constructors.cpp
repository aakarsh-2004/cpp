#include<iostream>
using namespace std;

class Rectangle {
public:
    int l;
    int b;
    Rectangle() { //default constructor - no arguments passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) { // paramereterised constructor
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r) { // copy constructor - iniatilize an object by existing obj
        l = r.l;
        b = r.b;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor is called!" << endl;
    }
};

int main() {
    Rectangle *r1 = new Rectangle();
    cout << r1 -> l << " " << r1 -> b << endl;
    delete r1; // delete can only be called on pointers


    Rectangle r2(10, 12);
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;
    return 0;
}