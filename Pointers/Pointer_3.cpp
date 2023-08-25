#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


// swapping using pointers
void swapFunction(int *x, int *y) {
    int tempVal = *x;
    *x = *y;
    *y = tempVal;
}

int main() {
    int x, y;
    cin >> x >> y;
    int *ptrX = &x;
    int *ptrY = &y;
    swapFunction(ptrX, ptrY);
    cout << x << " " << y << endl;
    return 0;
}





// swapping using pass by reference
// void swapFunction(int &x, int &y) {
//     int tempVal = x;
//     x = y;
//     y = tempVal;
// }

// int main() {
//     int x, y;
//     cin >> x >> y;
//     swapFunction(x, y);
//     cout << x << " " << y << endl;
//     return 0;
// }