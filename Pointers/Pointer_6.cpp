#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void process(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << endl;
    };
};

int main() {
    int newArr[] = {1, 2, 3, 4};
    process(newArr, 4);
    return 0;
}