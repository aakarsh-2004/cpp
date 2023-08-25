#include <iostream>
#include<string>
using namespace std;


// first method created by me
// int sumOfDigits(int n) {
//     if (n >= 0 && n <= 9) return n;
//     string str = to_string(n);
//     int size = str.size();
//     int ans = sumOfDigits(stoi(str.substr(0,1))) + sumOfDigits(stoi(str.substr(1, size)));
//     return ans;
// }

// int main() {
//     int num = 12345;
//     // cin >> num;
//     int result = sumOfDigits(num);
//     cout << result << endl;
//     return 0;
// }




// second method given by sir

int f(int n) {
    if (n >= 0 && n <= 9) return n;
    int lastDigit = n%10;
    n /= 10;
    int result = f(lastDigit) + f(n);
    return result;
}

int main() {
    int num = 1234;
    int result = f(num);
    cout << result << endl;
    return 0;
}