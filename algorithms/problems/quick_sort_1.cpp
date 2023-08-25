// Write a program to find kth smallest element using quick sort


// we could have just used quick sort and checked for the value but it would've had more time complexity

#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l-1; // for inserting elements less than pivot
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now i is pointing to the element greater than pivot
    swap(arr[i+1], arr[r]);
    return i+1;
}

int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r-l+1) {
        int pos = partition(arr, l, r);
        if (pos-l == k-1) {
            return arr[pos];
        } else if (pos - l > k-1) {
            return kthSmallest(arr, l, pos-1, k);
        } else {
            return kthSmallest(arr, pos+1, r, k-pos+l-1);
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 5, 2, 1, 4, 7, 8, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5; 
    int res = kthSmallest(arr, 0, n-1, k);
    cout << res << endl;
    for (int i: arr) {
        cout << i << " ";
    }
    return 0;
}