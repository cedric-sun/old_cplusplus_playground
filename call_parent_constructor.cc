//
// Created by ced on 5/5/20.
//

#include <string>
#include <utility>


class A {
private:
    int a, b;
    double c;
public:
    A(int a, int b, double c) : a(a), b(b), c(c) {}
};

class B : public A {
private:
    int d;
public:
    B(int a, int b, double c, int d) : d(d) {}
};

int main() {

}

