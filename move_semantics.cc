//
// Created by ced on 5/2/20.
//

#include <vector>
#include <string>
#include <iostream>

int main() {
    std::string str0{"string #0"};
    std::string str1{std::move(str0)};
    std::cout << str1 << std::endl;
}