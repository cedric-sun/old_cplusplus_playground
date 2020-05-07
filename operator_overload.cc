//
// Created by ced on 5/5/20.
//

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class A {
private:
    int a;
    double b;
public:
    A(int a, double b) : a(a), b(b) {}

    friend ostream &operator<<(ostream &os, const A &a_ref);
};

ostream &operator<<(ostream &os, const A &a_ref) {
    return os << "a: " << a_ref.a << "\tb: " << a_ref.b;
}

int main() {
    A a_obj{33, 55};
    cout << a_obj << endl;
}