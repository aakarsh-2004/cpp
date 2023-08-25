#include<iostream>
#include<vector>
using namespace std;

int main() {
    // creating a vector with size 5
    vector<int> v(5);

    // resizing the vector
    // v.resize(8);
    
    // size returns the length of the vector
    cout << v.size();

    // Performing operations in vectors

    // pushes the element at the end of the vector
    // v.push_back();
    // insert '3' at index 2
    // v.insert(2, 3);
    // deletes the last element
    // v.pop_back();
    // takes index as argument and delete the element at that index
    // v.erase(2);
    // deletes all the elements
    // v.clear();
    return 0;
}