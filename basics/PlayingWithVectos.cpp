#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    };
    cout << endl;
    
    v.insert(v.begin()+2, 3);

    // foreach loop
    for (int ele: v) {
        cout << ele << " ";
    }

    return 0;
}