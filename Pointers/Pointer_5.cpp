#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    // When we increment the pointer that stores the memory location by one it starts pointing on the subsequent next memory location, vice versa and opposite with decrement
    int x = 10;
    int y = 20;
    int *ptrX = &x;
    int *ptrY = &y;
    // x and y's memory address becomes same now
    ptrX++;
    *ptrX += 20;
    // will print 20 as 20 is stored in the next memory location
    cout << *ptrX << " " << *ptrY << endl;


    cout << "The size of an integer in linux is => " << (sizeof(int))<< " bytes" << endl;
    return 0;
}