#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A::C'tor called. Object created: " << this << endl;
    }

    A(int x) {
        cout << "A::C'tor with int parameter called. Object created: " << this << endl;
    }
};

class B {
public:
    B() {
        cout << "B::C'tor called. Object created: " << this << endl;
    }
};

class C {
private:
    A a_member0, a_member1;
    B b_member;
public:
    C() : a_member1{15} { // call specific c'tor of member
        // c'tors of data members run before the class's own c'tor run
        // RAII: all data members are ready to be used here.
        cout << "C::C'tor called. Object created: " << this << endl;
    }
};

int main() {
    C c_obj;
}