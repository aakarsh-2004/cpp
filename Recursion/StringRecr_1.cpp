#include<iostream>
#include<string>
using namespace std;

int f(string str, int idx, int n) {
    if (idx == (n-1)) return str[idx];
}

int main() {
    string str = "abcasd";
    int res = f(str, 0, str.size());
    cout << res << endl;
    return 0;
}