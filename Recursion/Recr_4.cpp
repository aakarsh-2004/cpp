#include<iostream>
using namespace std;

void f(int n) {
    // base case
    if (n < 1) return;
    // printing (n-1) natural numbers
    f(n-1);
    cout << n << " ";
};

int main() {
    int n = 4;
    f(n);
    return 0;
}