//
// Created by ced on 5/7/20.
//

#include <cstdio>

namespace const_member_function {
    class A {
    private:
        int data;
    public:
        int GetData() const {
            return data;
        }

        void DoNothing() {
        }
    };

    void Demo() {
        A a_obj{};
        const A *ptr = &a_obj; // promise that a_obj won't be changed via ptr, enforced by only allowing calling const member function
        ptr->GetData(); // ok: interface guarantees const
        //ptr->DoNothing() // error: no calling non-const member function via pointer to const
    }
}

namespace basic_types {
    void pointers() {
        int c = 42;
        const int *ptr_to_const = &c;// i promise i won't change c via this pointer
        int *const const_ptr_to = &c;// i won't change the address in this pointer variable after init
        const int *const const_ptr_to_const = &c;
    }

    void refs() {
        int c = 42;
        const int &ref_to_const = c; // promise won't change c via this reference
//        std::printf("%d\n", c_const_ref); // but change via other means will still be reflected.
//        c=33;
//        std::printf("%d\n", c_const_ref);

        // lvalue ref to prvalue must be const
        const int &ref_to_prvalue = 42;
        int &&rvref = 42;

        int *const &c_pointer_ref = &c; // notice: binding reference to prvalue; ref to const
        int *cptr = &c;
        int **cptrptr = &cptr;
        int **const &cptrptrref = cptrptr;

//        int *c_ptr = &c;
//        int *&c_addr_ref = c_ptr;

//        int *&ref_to_int_ptr = int_ptr;
    }
}

namespace what {
    class A {

    };

    void Demo() {
        const A a_obj; //?
    }
}

int main() {
    basic_types::refs();
}