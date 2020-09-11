//
// Created by ced on 5/5/20.
//

#include <thread> // since c++11
#include <cstdio>

static int cnt;

void foo() { // race condition
    for (int i = 0; i < 100000; ++i) {
        cnt++;
    }
}

int main() {
    cnt = 0;
    std::thread th0(&foo);
    std::thread th1(&foo);
    th0.join();
    th1.join();
    std::printf("%d\n", cnt);
}
