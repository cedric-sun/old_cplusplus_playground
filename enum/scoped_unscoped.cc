//
// Created by ced on 5/8/20.
//

enum enum0_t {
    a, b;
};

enum class enum1_t {
    c, d;
};

int main() {
    enum0_t e0_var = b;
    enum1_t e1_var = enum1_t::c;
}