#include<iostream>
using namespace std;

int fib(int n) {
    // base case
    if (n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
};

int main() {
    int num;
    cin >> num;
    int result = fib(num);
    cout << result << endl;
    return 0;
}
