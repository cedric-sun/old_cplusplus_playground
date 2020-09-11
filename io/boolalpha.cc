//
// Created by ced on 5/7/20.
//

#include <iostream>

int main() {
    std::cout << true << '\t' << false << std::endl;//1	0
    std::cout << std::boolalpha;
    std::cout << true << '\t' << false << std::endl;//true	false
}