#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int n = 11;
    int prev = 0, curr = 1, next;
    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        cout << next << " ";
    }
    return 0;
}