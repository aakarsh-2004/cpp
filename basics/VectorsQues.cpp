#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<int> v = {1, 2, 3, 3, 5, 5, 5, 2};
    // vector<int> finalArr;
    // int userInput;
    // cout << "Enter the number: ";
    // cin >> userInput;
    // int count = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] > userInput) {
    //         finalArr.push_back(v[i]);
    //     };
    // };
    // int element;
    // int countNumber = 0;
    // for (int i = 0; i < finalArr.size(); i++) {
    //     element = finalArr[i];
    //     if (finalArr[i] == element && countNumber == 0) {
    //         count += 1;
    //         countNumber += 1;
    //     }
    // }
    // cout << "Total elements greater than " << userInput << " are: " << count << endl;
    
    
    
    // Check if the given array is sorted or not
    // vector<int> v = {1, 2, 3, 4, 3};
    // int count = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] < v[i+1]) {
    //         count += 1;
    //     };
    // };
    // if (count == v.size() - 1) {
    //     cout << "Sorted!" << endl;
    // } else {
    //     cout << "Not Sorted!" << endl;
    // }
    

    // Target sum
    // vector<int> v = {1, 2, 3, 4, 5};
    // int targetSum;
    // cout << "Enter a number: ";
    // cin >> targetSum;
    // int pairs = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = 0; j < v.size(); j++) {
    //         for (int k = 0; j < v.size(); j++) {
    //             if (v[i] + v[j] + v[k] == targetSum) {
    //                 pairs += 1; 
    //             };
    //         }
    //     };
    // };
    // cout << "Total triplets whose sum is " << targetSum << ", are => " << pairs << endl;




    // vector<int> v = {2, 3, 1, 3, 2, 4, 1};
    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = i+1; j < v.size(); j++) {
    //         if (v[i] == v[j]) {
    //             v.erase(i); 
    //             v.erase(j); 
    //         }
    //     }
    // }
    // cout << v[0];


    // Finding second largest element in an array

    // vector<int> v = {34, 1, 24, 43, 3, 4, 35};
    // int largestNumber = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] > v[i+1] && v[i] > largestNumber) {
    //         largestNumber = v[i];
    //     } else if (v[i+1] > v[i] && v[i+1] > largestNumber) {
    //         largestNumber = v[i+1];
    //     }
    // }
    // int secondLargest = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] > v[i+1] && v[i] < largestNumber && v[i] > secondLargest) {
    //         secondLargest = v[i];
    //     } else if (v[i+1] > v[i] && v[i+1] < largestNumber && v[i+1] > secondLargest) {
    //         secondLargest = v[i+1];
    //     }
    // }
    // cout << secondLargest << endl;


    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> finalArr(v.size());
    cout << v.end();
    // for (int i = (v.end() - k); i < k; i++) {
    //     finalArr.push_back(v.end() )
    // }
    return 0;
}