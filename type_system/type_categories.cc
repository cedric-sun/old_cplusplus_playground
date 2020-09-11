//
// Created by ced on 5/6/20.
//

#include <iostream>
#include <type_traits>

/*
 * type categories check utilities introduced in c++11
 *
 * https://en.cppreference.com/w/cpp/types
 *
 * https://en.cppreference.com/w/cpp/language/type
 */

using std::cout;
using std::endl;

/*
4 entities have type:
     - objects
     - references
     - functions (including function template specialization)
     - expressions
 */

namespace fundamental {
    //void, nullptr_t, arithmetic

    void Demo() {
        cout << "void is fundamental: " << std::is_fundamental<void>::value << endl;
        cout << "void is void: " << std::is_void<void>::value << endl;
        cout << "-----------------------" << endl;
        cout << "nullptr_t is fundamental: " << std::is_fundamental<std::nullptr_t>::value << endl;
        cout << "nullptr_t  is nullptr_t : " << std::is_null_pointer<std::nullptr_t>::value << endl;
        cout << "-----------------------" << endl;
        cout << "unsigned short int is fundamental: " << std::is_fundamental<unsigned short int>::value << endl;
        cout << "unsigned short int is arithmetic: " << std::is_arithmetic<unsigned short int>::value << endl;
        cout << "unsigned short int is integral: " << std::is_integral<unsigned short int>::value << endl;
        cout << "-----------------------" << endl;
        cout << "long double is fundamental: " << std::is_fundamental<long double>::value << endl;
        cout << "long double is arithmetic: " << std::is_arithmetic<long double>::value << endl;
        cout << "long double is floating_point: " << std::is_floating_point<long double>::value << endl;
        cout << "-----------------------" << endl;
    }
}

namespace compound {
    // reference, pointer, pointer to member,
    // array, function, enumeration, class

    class A {
    public:
        int data0;
        int data1;

        void foo() {}
    };

    void Demo() {
        cout << "lvalue ref to int pointer is_compound: " << std::is_compound<int *&>::value << endl;
        cout << "lvalue ref to int pointer is_reference: " << std::is_lvalue_reference<int *&>::value << endl;
        cout << "lvalue ref to int pointer is_lvalue_reference: " << std::is_lvalue_reference<int *&>::value << endl;
        cout << "lvalue ref to int pointer is_rvalue_reference: " << std::is_rvalue_reference<int *&>::value << endl;
        cout << "-----------------------" << endl;
        cout << "rvalue ref to int is_compound: " << std::is_compound<int &&>::value << endl;
        cout << "rvalue ref to int is_reference: " << std::is_reference<int &&>::value << endl;
        cout << "rvalue ref to int is_lvalue_reference: " << std::is_lvalue_reference<int &&>::value << endl;
        cout << "rvalue ref to int is_rvalue_reference: " << std::is_rvalue_reference<int &&>::value << endl;
        cout << "-----------------------" << endl;
        cout << "pointer to data member is_compound: " << std::is_compound<int A::*>::value << endl;
        cout << "pointer to data member is_member_object_pointer: " << std::is_member_object_pointer<int A::*>::value << endl;
        cout << "pointer to data member is_member_function_pointer: " << std::is_member_function_pointer<int A::*>::value << endl;
        cout << "-----------------------" << endl;
        cout << "pointer to member function is_compound: " << std::is_compound<int (A::*)()>::value << endl;
        cout << "pointer to member function is_member_object_pointer: " << std::is_member_object_pointer<int (A::*)()>::value << endl;
        cout << "pointer to member function is_member_function_pointer: " << std::is_member_function_pointer<int (A::*)()>::value << endl;
        cout << "-----------------------" << endl;
        cout << "int[] is_compound: " << std::is_compound<int[]>::value << endl;
        cout << "int[] is_array: " << std::is_array<int[]>::value << endl;
        cout << "-----------------------" << endl;
        cout << "void(int) is_compound: " << std::is_compound<void(int)>::value << endl;
        cout << "void(int) is_function: " << std::is_function<void(int)>::value << endl;
        cout << "-----------------------" << endl;
        cout << "class A is_compound: " << std::is_compound<A>::value << endl;
        cout << "class A is object type: " << std::is_object<A>::value << endl;
        cout << "ref to class A is object type: " << std::is_object<A &>::value << endl;
    }
}

namespace scalar {
    // scalar type: (possibly cv-qualified)
    // - arithmetic
    // - pointer
    // - pointer to member
    // - enumeration
    // - std::nullptr_t type
    struct A {int data;};
    void Demo() {
        cout << "nullptr_t is_scalar: "<<std::is_scalar<nullptr_t>::value << endl;
        cout << "struct A is_scalar: "<<std::is_scalar<A>::value << endl;
    }
}

// TODO:  is_trivial

int main() {
    cout << std::boolalpha;
//    fundamental::Demo();
//    compound::Demo();
    scalar::Demo();
}