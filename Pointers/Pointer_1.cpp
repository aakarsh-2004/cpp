// Pointers are used to store memory location of variables

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    // string greet = "Hemlo World!!!";
    // string *address = &greet;
    // *address = "Hello World!";
    // cout << greet << endl;
    // cout << address << endl;

    int x,y;
    cin >> x >> y;
    
    int *ptrx = &x;
    int *ptry = &y;

    int result;
    int *resultPtr = &result;
    *resultPtr = *ptrx + *ptry;
    cout << result << endl;
    return 0;
}

