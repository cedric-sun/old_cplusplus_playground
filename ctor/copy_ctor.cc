//
// Created by ced on 5/9/20.
//

class A {
    // implicitly-declared copy ctor
};

int main() {
    A a_obj;
    A copy_obj{a_obj};
}