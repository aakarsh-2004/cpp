#include<iostream>
using namespace std;

void f(int num, int k) {
    if (k < 1) return;
    f(12, k-1);
    cout << num * k << " ";
}

int main () {
    f(12, 5);
    return 0;
}