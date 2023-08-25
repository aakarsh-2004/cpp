#include<iostream>

int changeValue(int &x) {
    x = 100;
    return x;
}

int main() {
    int y = 10;
    changeValue(y);
    std::cout << y;
    return 0;
}