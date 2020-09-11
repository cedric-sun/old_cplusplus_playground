//
// Created by ced on 5/11/20.
//

int main() {
    // For non-function and non-array glvalue expression,
    // they can be convert to a prvalue expr of the same type.

    // This happens almost everywhere.

    /*
     * https://en.cppreference.com/w/cpp/language/operator_assignment
     *
     * The direct assignment operator expects a modifiable lvalue as its
     * left operand and an rvalue expression or a braced-init-list (since C++11)
     * as its right operand, and returns an lvalue identifying the left operand
     * after modification.
     */

    int a = 42;
    int b;  // for local variable, declaration is definition;
    b = a; // int lvalue expr `a` is implicitly converted to an int prvalue (from a to the value of a)

    const char *str = "hello world"; // lvalue string literal is converted to prvalue
}
