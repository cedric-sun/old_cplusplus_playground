//
// Created by ced on 5/6/20.
//

// https://en.cppreference.com/w/cpp/language/basic_concepts

/*
 * Definition is declaration.
 *
 * The declarations that define all properties required to use an entity are definitions.
 */

#include <iostream>
#include <type_traits>

int main() {
    std::cout << std::is_fundamental<void>::value << std::endl;
}