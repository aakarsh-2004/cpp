#include<iostream>
#include<algorithm>
using namespace std;


// my solution (not so perfect, gives wrong answers sometimes)
// int f(int x, int y, int divisor) {
//     if (divisor == 1) return 1;
//     int res = f(x, y, divisor-1);
//     if ((x % divisor == 0) && (y % divisor == 0)) return divisor;
// };

// int main() {
//     int x = 54, y = 121;
//     int z = max(x,y)-min(x,y);
//     int divisor = min(x, z);
//     cout << f(x, z, divisor);
//     return 0;
// }



// sir's solution

int gcd(int a, int b) {
    // base case
    if (b == 0) return a;
    // assumption
    return gcd(b, a%b);
}

int main() {
    int a = 54, b = 121;
    // when a is greater
    cout << gcd(max(a,b), min(a,b));
    return 0;
}