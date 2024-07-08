// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int a = t / 500;
    t %= 500;
    int b = t / 200;
    t %= 200;
    int c = t / 100;
    t %= 100;
    int d = t / 50;
    t %= 50;
    int e = t / 20;
    t %= 20;
    int f = t / 10;
    t %= 10;
    int g = t / 5;
    t %= 5;
    int h = t;
    cout << a + b + c + d + e + f + g + h << endl;
    cout << a << " " << b << " " << c << " "
        << d << " " << e << " " << f << " " << g << " " << h;
    return 0;
}
