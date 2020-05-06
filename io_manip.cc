//
// Created by ced on 5/2/20.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;
using std::endl;


const char *const str = "Hello World";

int main() {
    // setw and width only affect the next output call
    for (int i = 0; i < 4; i++) cout << setw(17) << str;
    cout << endl;
    for (int i = 0; i < 4; i++) {
        int orig_width = cout.width(17);
        cout << str;
    }
    cout << endl;
    // left, right, and internal justification affect all subsequent output calls
    cout << std::left;
    for (int i = 0; i < 4; i++) cout << setw(17) << str;
    cout << std::right << endl;
    for (int i = 0; i < 4; i++) cout << setw(17) << str;
    cout << std::internal << endl;
    for (int i = 0; i < 4; i++) cout << setw(17) << -i;
    cout << std::right << endl;
    // change fill
    for (int i = 0; i < 4; i++) cout << setw(17) << std::setfill('_') << str;
    cout << endl;
    for (int i = 0; i < 4; i++) {
        char orig_fill = cout.fill('x');
        cout << setw(17) << str;
    }
}
