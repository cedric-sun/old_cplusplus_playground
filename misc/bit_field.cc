//
// Created by ced on 5/11/20.
//

#include <cstdio>

struct S {
    unsigned int a:24;
    unsigned int b:8;
};


// TODO: C++20 initializer

int main() {
    S s_obj;
    std::printf("%lu\n", sizeof(s_obj));
}