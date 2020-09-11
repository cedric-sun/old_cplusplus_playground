#include <cstdio>

class A {

};

//A&& foo() {
//    A a_obj;
//}

int main() {
    int a = 42;
    (++a) = 5; // ?
    //A modifiable lvalue may be used as the left-hand operand of
    // the built-in assignment and compound assignment operators.
    std::printf("%d\n", a);
}

