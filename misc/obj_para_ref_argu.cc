//
// Created by ced on 5/10/20.
//

#include <cstdio>

// c++ is trying to impose some kind of indistinguishability
// between object and its reference, but they are essentially different.

// any function that takes object of type T as parameter
// should also accept argument of reference of type T
void foo(int x) {
    std::printf("x: %p\n", &x);
}

int main() {
    int c = 42;
    std::printf("c: %p\n", &c);
    int &ref = c;
    std::printf("ref: %p\n", &ref); // take address of ref type is the same that of the object
    foo(ref);
}
