#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll power(ll x, ll n) { ll t = 1; while (n--) { t*=x; } return t; }

map<int, int> init_factors() {
    map<int, int> f;
    int relevant[] = {2, 3, 5, 7, 11, 13, 17, 19};
    for (int r : relevant) { f[r] = 0; }
    return f;
}

map<int, int> factors(int n) {
    int c;
    map<int, int> fs = init_factors();
    int relevant[] = {2, 3, 5, 7, 11, 13, 17, 19};
    for (int i : relevant) {
        c = n;
        while (!(c%i) && c>0) { fs[i]++; c/=i; }
    }
    return fs;
}

int main() {
    ll total = 1;
    map<int, int> ms = init_factors();
    int relevant[] = {2, 3, 5, 7, 11, 13, 17, 19};
    for (int i=2; i<21; i++) {
        map<int, int> fs = factors(i);
        for (int r : relevant) { ms[r] = max(ms[r], fs[r]); }
    }
    for (auto p : ms) { total *= power((ll) p.first,(ll) p.second); }
    cout << "ANSWER: " << total << endline;
    return 0;
}
