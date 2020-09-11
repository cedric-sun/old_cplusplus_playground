#include <iostream>

using std::cout;
using std::endl;

namespace ctor {
    /*
     * https://en.cppreference.com/w/cpp/language/default_constructor
     *
     * A default constructor is a constructor which can be called with no arguments
     * (either defined with an empty parameter list, or with default arguments provided for every parameter).
     *
     * A type with a public default constructor is DefaultConstructible.
     */

    namespace no_ctor {
        /*
         * If no user-declared constructors of any kind are provided for a class type (struct, class, or union),
         * the compiler will always DECLARE a default constructor as an inline public member of its class.
         */

        // note that in the cases described above, the c'tor is just DECLARED.
        // How the c'tor is DEFINED is another problem: it can be either:
        //      - implicitly defined, or
        //      - defined as deleted

        class A {
            // c'tor both implicitly DECLARED and implicitly DEFINED
        public:
            const int a = 22, b = 42;
        };

        void Demo() {
            A a_obj{};
            cout << a_obj.a << '\t' << a_obj.b << endl;
        }
    }

    namespace force_autogen_ctor {
        /*
            If some user-declared constructors are present, the user may still force the automatic
            generation of a default constructor by the compiler that would be implicitly-declared
            otherwise with the keyword default.
         */
        class A {
        public:
            int a, b;

            A(int a, int b) : a(a), b(b) {}

            // if A has const member, regardless of the line below,
            // the default destructor is defined as deleted
            A() = default;
            // the same as A(){} ?
        };

        void Demo() {
            A a_obj{};
            cout << a_obj.a << '\t' << a_obj.b << endl;
        }
    }

    namespace not_even_implicitly_declared {
        class A {
        private:
            const int a;
        public:
            A(const int a) : a(a) {}
        };

        void Demo() {
            /*
             * fail to compile:
             * No matching constructor for initialization of 'ctor::not_even_implicitly_declared::A'
             */
            //A a_obj{};
        }
    }

    namespace implicitly_declared_but_defined_as_delete {
        class A {
        private:
            const int a;
        };

        void Demo() {
            /*
             * fail to compile:
             * Call to implicitly-deleted default constructor of 'ctor::implicitly_defined_but_defined_as_delete::A'
             */
            //A a_obj{};
        }
    }
}

int main() {
    ctor::force_autogen_ctor::Demo();
}
