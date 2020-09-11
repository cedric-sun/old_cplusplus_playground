//
// Created by ced on 5/6/20.
//

#include <vector>
#include <iostream>
#include <memory>

using namespace std;

void foo() {
    auto array_of_vec = make_unique<vector<int>>();//?
}

int main() {
    const int N = 15;
    vector<vector<int>> c{N};
    c.erase(c.begin() + 7);
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << it - c.begin() << '\t' << it->empty() << endl;
    }
    cout << c[14].empty() << endl;
}

