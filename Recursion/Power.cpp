#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

int calcPow(int x, int y) {
    if (y == 0) return 1;
    return calcPow(x, y-1) * x;
}


// more optimized algo
int f(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        if (y%2==0) return (f(x, y/2) * f(x, y/2));
        if (y%2!=0) return (x*f(x, (y-1)/2));
    }
}

int main() {
    int x = 2;
    int y = 4;
    int result = f(x, y);
    cout << result << endl;
    return 0;
}