#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    // Constructor is automatically invoked whenever an object is created
    /* Constructor is a special member function with same name as that of the Class. It is used to initialize the objects of its class */
    Complex(void); 
    void getVal(); 
};

// this is a default constructor
Complex :: Complex(void) { 
    a = 10;
    b = 0;
}

void Complex :: getVal() {
        cout << "Value of a is => " << a << endl << "Value of b is => " << b << endl; 
}

int main() {
    Complex cum; 
    // cout << c.a << endl;
    // cout << c.b << endl;
    cum.getVal();
    return 0;
}



// Characteristics of Constructors

/*

1. Should be declared in the public section.
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to the address

*/