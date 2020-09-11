//
// Created by ced on 5/5/20.
//

#include <iostream>

using std::cout;
using std::endl;

void CStyle() {
    const int &c = 42;
    ((int &) c) = 55;
    cout << c << endl;
}

// const_cast converts between different cv-qualification of the same object
void ConstCast() {
    const int &c = 42;
    // as lvalue
    const_cast<int &>(c) = 55;
    cout << c << endl;
    // as rvalue
    int &d = const_cast<int &>(c);
    d = 66;
    cout << c << endl;
}

void StaticCast() {

}

void ReinterpretCast() {

}

void DynamicCast() {

}

int main() {

}