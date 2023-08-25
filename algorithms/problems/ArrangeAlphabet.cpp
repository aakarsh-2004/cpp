#include<iostream>
#include<cstring>
using namespace std;

void selectionSort(char fruit[][60], int n) {
    // finding the minimum element
    for (int i = 0; i < n-1; i++) {
        int m = i;
        for (int j = i+1; j < n; j++) {
            if (strcmp(fruit[m], fruit[j]) > 0) {
                m = j;
            };
        };
        // placing the min element at the beginning
        if (i != m) {
            swap(fruit[i], fruit[m]);
        };
    };
    return;
};

int main() {
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    selectionSort(fruit, n);

    for (string i: fruit) {
        cout << i << " ";
    };
};