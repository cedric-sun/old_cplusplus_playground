//
// Created by ced on 5/10/20.
//

#include <cstdio>

// for pass by value (?),
// const qualifier is only effective in function definition, and not make much sense in declaration
void foo(int);

// is a valid definition of foo even parameter in declaration is not const-qualified
void foo(const int c) {}

void bar(char *ptr);

void bar(char *ptr) {
    std::puts("non-const parameter bar() called.");
}

void bar(const char *ptr) {
    std::puts("const parameter bar() called.");
}

int main() {
    foo(10);
    const char *c_str = "213123";
    char *var_str = nullptr;
    bar(c_str);
    bar(var_str);
}