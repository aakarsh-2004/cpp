#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    // wild pointers
    int *ptr;
    cout << ptr << endl;
    cout << *ptr << endl;

    // NULL pointers
    int *ptrOne = NULL;
    cout << ptrOne << endl; 


    // void pointers are used when we want to store memory of any datatype in a variable (note- they cannot be dereferenced directly)

    int x = 10;
    float y = 8.23;
    void *ptrVoidOne = &x;
    void *ptrVoidTwo = &y;

    // we can now typecast the value as per our need
    int *finalValOne = (int *)ptrVoidOne;
    float *finalValTwo = (float *)ptrVoidTwo;
    // float *finalValTwo = (float *)y;
    cout << ptrVoidOne << " " << ptrVoidTwo << endl;
    cout << *finalValOne<< " " << *finalValTwo<<  endl;

    return 0;
}