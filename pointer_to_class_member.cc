//
// Created by ced on 5/6/20.
//

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;


namespace ptr_to_data_member {
    /*
     pointer to data member of a class:
          is no longer a pointer that holds an address,
          but something that, combined with an instance of that class, gives access to
          that data member of that instance
     */
    class A {
    public:
        int a, b;
        double c;

        A(int a, int b, double c) : a(a), b(b), c(c) {}

        friend ostream &operator<<(ostream &os, const A &a_ref) {
            return os << "a: " << a_ref.a << "\tb: " << a_ref.b << "\tc: " << a_ref.c;
        }
    };

    class B : public A {
    public:
        int d;

        B(int a, int b, double c, int d) : A(a, b, c), d(d) {}

        friend ostream &operator<<(ostream &os, const B &b_ref) {
            return os << static_cast<const A &>(b_ref) << "\td: " << b_ref.d;
        }
    };


    void Demo0() {
        int A::* p0; // p0 can point to any int data member of any instance of A
        p0 = &A::a;
        A a_obj{1, 2, 3.1415};
        a_obj.*p0 = 42;
        p0 = &A::b;
        a_obj.*p0 = 66;
        cout << a_obj << endl;
        cout << p0 << endl; // mysteriously outputs 1
        int *p1 = &a_obj.a;
        cout << p1 << endl; // traditional pointer outputs normal address
    }

    void Demo1() {

    }
}


int main() {
    ptr_to_data_member::Demo();
}