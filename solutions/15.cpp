#include <iostream>
#include <map>
#include <utility>
using namespace std;
using ll = int64_t;
#define endline '\n';

std::map<std::pair<int, int>, ll> mem;

ll n_paths(int size) {
    for (int i = 0; i <= size; ++i) {
        for (int j = 0; j <= size; ++j) {
            if (i > 0) mem[{i, j}] += mem[{i - 1, j    }];
            if (j > 0) mem[{i, j}] += mem[{i    , j - 1}];
        }
    }
    return mem[{size, size}];
}

int main() {
    const int N = 20;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            mem[{i, j}] = 0;
    }
    mem[{0,0}] = 1;
    ll total = n_paths(N);

    cout << "ANSWER: " << total << endline;
    return 0;
}
