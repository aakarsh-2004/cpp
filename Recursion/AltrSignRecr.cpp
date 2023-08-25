#include<iostream>
using namespace std;

int f(int n) {
    // base case
    if (n == 1) return 1;
    // assumption
    return f(n-1) + (n % 2 == 0 ? -1 * n : n);
}

int main() {
    int num = 4;
    int res = f(num);
    cout << res << endl;
    return 0;
}