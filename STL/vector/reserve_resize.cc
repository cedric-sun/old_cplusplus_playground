//
// Created by ced on 5/13/20.
//

#include <vector>
#include <cstdio>

using std::vector;

int main() {
    vector<vector<int>> adj_list{15};
    std::printf("%lu\n", adj_list.size());// 15
    adj_list.reserve(1000); // only extend container capacity
    std::printf("%lu\n", adj_list.size());// 15
    adj_list.resize(300); // additional default-inserted elements are appended
    std::printf("%lu\n", adj_list.size());// 300
    adj_list[299].push_back(27182818);
    for (int i = 0; i < adj_list.size(); ++i) {
        auto row = adj_list[i];
        if (!row.empty())
            for (int x : row) std::printf("%d: %d\n", i, x);
    }
}

