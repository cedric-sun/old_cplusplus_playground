#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A created." << endl;
    }
};

int main() {
    A a = A();
}
