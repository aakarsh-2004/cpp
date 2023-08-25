#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    int newArr[3] = {1, 2, 3};
    int (*ptr)[3] = &newArr;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}