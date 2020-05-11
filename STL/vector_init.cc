//
// Created by ced on 5/6/20.
//

#include <vector>
#include <iostream>

using namespace std;

int main() {
    const int N = 15;
    vector<vector<int>> c{N};
    c.erase(c.begin() + 7);
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << it - c.begin() << '\t' << it->empty() << endl;
    }
    cout << c[14].empty() << endl;
}

