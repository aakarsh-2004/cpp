#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        int j = i-1;
        int num = n-1;
        if (v[j] == 0) {
            for (int k = j; k < n; k++) {
                v[k] = v[k+1];
            }
            v[num] = 0;
            num--;
        }
    }
}

int main() {
    vector<int> v = {0, 5, 0, 3, 9, 12, 0, 42, 0};
    f(v);

    for (int i: v) {
        cout << i << " ";
    };
    return 0;
};