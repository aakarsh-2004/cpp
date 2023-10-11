#include<iostream>
using namespace std;

class Test {
    int a;
    int b;
    public:
    Test(int n1, int n2) {
        a = n1;
        b = n2;
    };

    void getVal() {
        cout << a << " " << b;
    };
};

int main() {
    Test val(1, 2);

    val.getVal();
    return 0;
}