//
// Created by ced on 5/2/20.
//

#include <iostream>

using std::cout;
using std::endl;

class A {

};

A foo() {
    return {}; //?
}

int main() {
    for (auto i : {1, 2, 3, 4, 5}) {
        cout << i << endl;
    }
    const A &a_ref = foo();
}
