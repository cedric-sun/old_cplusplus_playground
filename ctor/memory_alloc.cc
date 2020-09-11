//
// Created by ced on 5/7/20.
//

#include <iostream>

using std::cout;
using std::endl;


// global static
int a[300];

int main() {
    cout << typeid(a).name() << endl;
}