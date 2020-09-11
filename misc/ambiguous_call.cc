#include <cstdio>

class A {

};
//
//void bar(A a_obj) {
//    std::puts("bar(object) called.");
//}

void bar(A &a_ref) {
    std::puts("bar(lvalue ref) called.");
}

void bar(A &&a_rv_ref) {
    std::puts("bar(rvalue ref) called.");
}

A foo() {
    A a_obj;
    return a_obj;
}

int main() {
//    A a_obj;
//    bar(a_obj);// ambiguity between 1st and 2nd bar
//    bar(foo());// ambiguity between 1st and 3rd bar
    A &&ref = foo();
    bar(ref); //bar(lvalue ref) called.
    bar(foo()); //bar(rvalue ref) called.
}