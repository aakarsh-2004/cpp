#include<iostream>
using namespace std;


// partition algorithm (based on divide and conquer)
int partition(int arr[], int first, int last) {
    int pivot = arr[last];
    int i = first-1; // for inserting elements less than pivot
    int j = first; // for finding elements less than pivot
    for (; j < last; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now i is pointing towards the element greater than i
    swap(arr[i+1], arr[last]);
    return i+1;
}

void quickSort(int arr[], int first, int last) {
    if (first >= last) return;
    int i = partition(arr, first, last);
    quickSort(arr, first, i-1);
    quickSort(arr, i+1, last);
}

int main() {
    int arr[] = {5, 3, 10, 1, 2, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);

    for (int i: arr) {
        cout << i << " ";
    }
    return 0;
}