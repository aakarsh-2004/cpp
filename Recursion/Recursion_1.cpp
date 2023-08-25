#include<iostream>
using namespace std;

void allPossibleComb(int number) {
    int leftPtr = 0;
    int rightPtr = number;
    while (leftPtr <= rightPtr) {
        if (leftPtr + rightPtr == number) {
            cout << leftPtr << " " << rightPtr << endl;
            leftPtr++;
            rightPtr--;
        } else {
            leftPtr++;
        }
    }
}

int main() {
    int num;
    cin >> num;
    allPossibleComb(num);
    return 0;
}