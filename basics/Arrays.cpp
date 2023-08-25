#include<iostream>
using namespace std;

int main() {
    // int ch[] = {1, 2, 3};
    // cout << ch[0] << endl;

    // To get the length of the array
    // cout << (sizeof(ch)) / (sizeof(int)) << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sizeOfArray = (sizeof(arr)) / (sizeof(int));
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i];
    };
    cout << endl;
    for (int i = (sizeOfArray - 1); i >= 0; i--) {
        cout << arr[i];
    }

    cout << endl;
    // foreach loop

    for (int ele: arr) {
        cout << ele;
    };

    cout << endl;
    
    char vowels[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter vowel: ";
        cin >> vowels[i];
    }
    cout << vowels[0] << vowels[1] << vowels[2] << vowels[3] << vowels[4] << endl;
    return 0;
};