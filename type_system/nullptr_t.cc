//
// Created by ced on 5/7/20.
//

#include <iostream>

using std::cout;
using std::endl;

int main() {
    nullptr_t mynullptr = nullptr;
    int *ptr = mynullptr;
    cout << ptr << endl;
}