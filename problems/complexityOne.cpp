#include<iostream>
#include<vector>
#include<string>
using namespace std;

float returnSum(float x, float y) {
    float n = y-x+1;
    float first = n/2;
    float second = (2*x + n-1);
    float finalRes = first * second;
    return finalRes;
};

int main() {
    float x, y;
    cin >> x >> y;
    float result = returnSum(x, y);
    cout << result << endl;
    return 0;
}