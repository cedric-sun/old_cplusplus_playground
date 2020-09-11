//
// Created by ced on 5/7/20.
//

void foo(int x) {

}

void bar(int &x) {

}

#include <cstdio>

void zoo(int &&x) {
    int *ptr = &x;
    printf("%p\n", ptr);
}

int give42() { return 42; }

int main() {
    zoo(give42());
}