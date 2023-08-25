#include<iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 102, 4, 5, 62};
    int lengthOfArray = (sizeof(arr)) / (sizeof(int));
    int maxNumber = 0;
    for (int i = 0; i < lengthOfArray; i++) {
        if (arr[i] > arr[i+1] && arr[i] > maxNumber) {
            maxNumber = arr[i];
        } else if (arr[i+1] > arr[i] && arr[i+1] > maxNumber) {
            maxNumber = arr[i+1];
        }
    };
    cout << maxNumber;
    return 0;
}