//
// Created by ced on 5/4/20.
//`

#include <string>
#include <iostream>

using std::cout;
using std::endl;

namespace case1 {
    /*
     * when the expression is used as the argument when calling a function that is declared with T2 as parameter;
     */
    class Foo {
    private:
        const std::string str;
    public:
        Foo(const char *str) : str{str} {}

        std::string GetStr() { return str; }
    };

    std::string Bar(Foo foo_obj) {
        return foo_obj.GetStr();
    }

    void Demo() {
        auto str = Bar("123");
        cout << str << endl;
    }
}


int main() {
    case1::Demo();
}