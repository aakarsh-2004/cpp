#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    // Sorting the binaries in the array (not vector)
    // int myArr[] = {1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0};
    // int length = (sizeof(myArr) / sizeof(int));
    // for (int i = 0; i < length; i++) {
    //     int savedValue;
    //     for (int j = i; j < length; j++) {
    //         if (myArr[i] == 1 && myArr[j] == 0) {
    //             savedValue = myArr[i];
    //             myArr[i] = myArr[j];
    //             myArr[j] = savedValue;
    //         }
    //     }
    // }
    // for (int i: myArr) {
    //     cout << i << " ";
    // }



    // Sorting even and odd integers

    // vector <int> myVector = {1, 2, 3, 4, 5, 6, 9, 10, 2, 7};
    // int v = 0;
    // for (int i = 0; i < myVector.size(); i++) {
    //     if ( myVector[i] % 2 == 0 ) {
    //         int tempVar = myVector[v];
    //         myVector[v] = myVector[i];
    //         myVector[i] = tempVar;
    //         v += 1;
    //     }
    // };
    
    // for (int i: myVector) {
    //     cout << i << " ";
    // }



    // Sorting even and odd integers with two pointers

    // vector<int> myVector = {1, 2, 3, 4, 5, 6};
    // int i = 0;
    // int j = myVector.size() - 1;
    // while (i < j) {
    //     if (myVector[i] % 2 != 0 && myVector[j] % 2 == 0) {
    //         int tempValue = myVector[i];
    //         myVector[i] = myVector[j];
    //         myVector[j] = tempValue;
    //         i++;
    //         j--;
    //     };
    //     if (myVector[i] % 2 == 0) {
    //         i++;
    //     };
    //     if (myVector[j] % 2 != 0) {
    //         j--;
    //     };
    // };
    // for (int i: myVector) {
    //     cout << i << " ";
    // };


    // Square the elements of the array and sort it

    vector<int> myArr = {-10, 1, 2, 3, -5, 4, 5};
    for (int i=0; i < myArr.size(); i++) {
        myArr[i]= myArr[i] * myArr[i];
    };
    for (int i = 0; i < myArr.size(); i++) {
        for (int j = i+1; j < myArr.size(); j++) {
            if (myArr[i] > myArr[j]) {
                int tempVar = myArr[i];
                myArr[i] = myArr[j];
                myArr[j] = tempVar;
            };
        };
    };
    for (int i: myArr) {
        cout << i << " ";
    }
    return 0;
}