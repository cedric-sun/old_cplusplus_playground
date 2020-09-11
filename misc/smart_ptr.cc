#include <memory>
#include <iostream>

using std::cout;
using std::endl;
using std::make_unique;
using std::make_shared;

class A {
public:
    A() {
        cout << "A instance created: " << this << endl;
    }

    virtual ~A() {
        cout << "A instance destructed: " << this << endl;
    }
};

void unique_demo() {
    auto a = make_unique<A>();
}


void shared_demo() {
    //auto a = make_shared<A>();
}

int main() {
    unique_demo();
    shared_demo();
}