//
// Created by ced on 5/7/20.
//

#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << typeid(42).name() << endl;
    cout << typeid(42u).name() << endl;
    cout << typeid(42L).name() << endl;
    cout << typeid(42LLU).name() << endl;
    cout << typeid(42ULL).name() << endl;
    cout << typeid(42.0).name() << endl;
    cout << typeid(42.0f).name() << endl;
    cout << typeid(1e13).name() << endl;
    cout << typeid("hello world").name() << endl;
}