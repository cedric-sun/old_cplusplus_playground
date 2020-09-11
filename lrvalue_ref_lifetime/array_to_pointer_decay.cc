//
// Created by ced on 5/13/20.
//

#include <cstdio>

void foo(int *ptr) {
    for (int i = 0; i < 3; ++i) {
        std::printf("%d\n", ptr[i]);
    }
}

/*
 * GCC bug as for 2020.5.14
 *
 * ENV: g++ (Arch Linux 9.3.0-1) 9.3.0
 *
 * See also:
 * https://stackoverflow.com/questions/55463861/why-does-passing-a-temporary-object-as-an-argument-need-stdmove
 * https://stackoverflow.com/questions/57392150/temporary-materialization-during-array-to-pointer-conversion
 */
int main() {
//    foo((int[]) {3, 5, 7});
    int *p = (int[]) {1, 23, 34};
    std::printf("%p\n", p);
    for (int i = 0; i < 3; ++i) {
        std::printf("%d\n", *(p + i));
    }
}