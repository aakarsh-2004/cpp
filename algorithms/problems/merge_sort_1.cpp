// given two sorted write a program to merge them in a sorted manner

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> num1, vector<int> num2, vector<int> &res) {
    int n1 = num1.size();
    int n2 = num2.size();
    int i = 0, j = 0; // initial index of array a and b
    int k = 0; // initial index of merged subarray
    while (i < n1 && j < n2) {
        if (num1[i] < num2[j]) {
            res.push_back(num1[i++]);
            // res[k++] = num1[i++];
        } else {
            res.push_back(num2[j++]);
            // res[k++] = num2[j++];
        };
    };
    while (i < n1) {
        res.push_back(num1[i++]);
        // res[k++] = num1[i++];
    };
    while (j < n2) {
        res.push_back(num2[j++]);
        // res[k++] = num2[j++];
    };
}

int main() {
    vector<int> num1 = {5, 8, 10};
    vector<int> num2 = {2, 7, 8};
    vector<int> res; 
    merge(num1, num2, res);

    for (int i: res) {
        cout << i << " ";
    }
    return 0;
}