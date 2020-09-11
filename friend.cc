//
// Created by ced on 5/5/20.
//

class A;

class B {
public:
    int foo(A);
};

class A {
private:
    int data;

    friend int B::foo(A);

public:
    A(int data);
};

int B::foo(A a_inst) {
    return a_inst.data;
}

A::A(int data) : data(data) {}

#include <iostream>

int main() {
    A a{42};
    B b{};
    int c = b.foo(a);
    std::cout << c << std::endl;
}
