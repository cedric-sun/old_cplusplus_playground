//
// Created by ced on 5/13/20.
//

#include <cstdio>

using std::printf;


class A {
public:
    int data;
    int flex_arr[];// must be at the end of class member declaration

    void foo() {
        printf("this: \t%p\n", this);
        printf("this->data: \t%p\n", &data);
        printf("this->flexarr: \t%p\n", flex_arr);
    }
};

int main() {
    A a_obj{};
    a_obj.foo();
}

