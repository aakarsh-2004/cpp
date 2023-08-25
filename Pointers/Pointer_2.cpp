#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    int x;
    cin >> x;
    int *ptrx = &x;

    // storing address of a pointer itself
    int *ptrTwo = ptrx;

    // multiplying the value of that address
    *ptrx *= *ptrx;

    // printing the address
    cout << ptrx << endl;
    // printing the value (dereferencing)
    cout << *ptrx << endl;
    // printing the original value
    cout << x << endl;
    return 0;
}