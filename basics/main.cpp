#include <iostream> //directive (processed by preprocessor)
#include<cmath>
using namespace std;

string myName = "Aakarsh Beohar";

int add(int a, int b) {
    int sum = a + b;
    return sum;
};

void fun(int *x) {
    cout << *x << endl; 
}

int main() {
    
    string name = "Aakarsh";
    cout << name << endl;
    cout << add(5, 10) << endl;

    // Using pass by reference 
    string a = "something";
    string &b = a;
    cout << "B is " << b << " A is " << a << endl;
    b = "something else";
    cout << "B is " << b << " A is " << a << endl;

    // pointers
    int x = 12;
    fun(&x);

    int p = 5;
    p = 6.2;
    cout << p << endl;


    // Accessing global variables inside the function we can use :: operator before the variable

    cout << ::myName << endl;
    return 0;
}