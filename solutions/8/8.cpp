#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total = 0;
    string num;
    cin >> num;
    for (ll i=0; i<1001-13; i++) {
        ll prod = 1;
        for (ll j=0; j<13; j++) { prod *= num[i+j]-48; }
        total = max(prod, total);
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
