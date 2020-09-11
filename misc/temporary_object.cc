//
// Created by ced on 5/10/20.
//

#include <cstdio>
#include <initializer_list>
#include <typeinfo>

class A {
public:
    int data;
};

A foo() {
    return {};
}


/*
 * Temporary objects are created when prvalue is materialized.
 *
 * Materialization is the conversion from prvalue to xvalue.
 */
int main() {
// 1. Binding a reference to a prvalue
    const int &lv_i_ref = 42; // lvalue ref must be const
    // int &nc_i_ref = 42; // error
    int &&rv_i_ref = 43;

// 2. performing s member access on a class prvalue
    int _ = foo().data;
    /*
     * https://en.cppreference.com/w/cpp/language/value_category
     *
     * ... all class and array prvalues have a result object even if it is discarded. (since c++17)
     */
    // conceptually even the following:
    foo();
    // is said to have a result object. But compiler has no reason to really create / store that object.
    // And there is no member access anyway, so there is no materialization.

// 3.(a) prvalue array-to-pointer conversion
    //???

// 3.(b) or subscripting on an array prvalue
    int x = ((int[]) {1, 6, 9})[2]; // the next level play
    // the outer parentheses is not necessary, but omitting it breaks clion's highlighting ...

// 4. initializing an object of type std::initializer_list<T> from a braced-init-list;
    std::initializer_list<int> init{31415926, 21474826, 42};

// 5. when typeid is applied to a prvalue (this is part of an unevaluated expression);
// 6. when sizeof is applied to a prvalue (this is part of an unevaluated expression);
    const char *type_id = typeid(42).name();
    size_t int_size = sizeof(42);

// 7. when a prvalue appears as a discarded-value expression.
    //????????



    const A &a_ref = foo(); // temporary object on the stack of main, and bind a reference to it


    int c = 32;
//    const int *&c_addr_ref = &c;
    const double &d_ref = c;
    c += 5;
    std::printf("%f\n", d_ref);
}