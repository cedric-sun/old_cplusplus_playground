//
// Created by ced on 5/6/20.
//

#include <iostream>

using namespace std;

void foo(int x) {
    cout << 1 << endl;
}

void foo(int x, int y = 42) {
    cout << 2 << endl;
}

int main() {
    foo(35);
}