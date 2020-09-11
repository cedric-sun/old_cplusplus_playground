//
// Created by ced on 5/6/20.
//

#include <cstdio>

class A { // member initialization list
private:
    int a;
public:
    A() : a(42) {}
};

class B { // default member initializer
private:
    int a = 42;
    int b{66};
};

int main() {
    int x(42);
    int y = 42;
    int z{42};
    int q = {42};
    std::printf("%d %d %d %d\n", x, y, z, q);
}