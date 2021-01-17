#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
    complex x, y, z;
    int choose;
    cout << "Input the   real  part of 1 (first)  complex number x: " << endl;
    cin >> x.a;
    cout << "Input the imagine part of 1 (first)  complex number x: " << endl;
    cin >> x.b;
    cout << "Input the   real  part of 2 (second) complex number y: " << endl;
    cin >> y.a;
    cout << "Input the imagine part of 2 (second) complex number y: " << endl;
    cin >> y.b;
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
}