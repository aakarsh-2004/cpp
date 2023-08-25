#include<iostream>
using namespace std;

int f(int *n) {
    if ((*n) < 10) return (*n);
    int lastDig = (*n) % 10;
    int cube = lastDig * lastDig * lastDig;
    (*n) /= 10;
    int res = f(n) + cube;
    return res;
}

int main() {
    int num = 14;
    int *ptr = &num;
    cout << f(ptr);
    return 0;
}