//
// Created by ced on 5/5/20.
//

#include <cstdio>

int main() {
    auto c = [](int x) { return x + 1; };
    std::printf("%d\n", c(41));
}
