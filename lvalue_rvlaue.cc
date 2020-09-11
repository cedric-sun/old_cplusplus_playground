//
// Created by ced on 5/5/20.
//

#include <iostream>

using std::endl;
using std::cout;

/*
 * Before C++11, reference can only refer to lvalues, i.e. something already exist at a certain memory
 * address on call stack or heap.
 */
void foo(int &x) {
    cout << "foo:" << x << endl;
}

void bar(int &&x) {
    cout << "bar:" << x << endl;
}

int main() {
    int a = 42;
    foo(a);
    // foo(42) is illegal;
    bar(42);
}