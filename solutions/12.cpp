#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int divisors(ll n) {
    int total = 2;
    for (ll i=2; i<sqrt(n)+1; i++) {
        if (!(n%i)) { total+=2; }
    }
    return total;
}

int main() {
    ll total = 0;
    ll count = 1;
    while (1) {
        total+=count;
        if (divisors(total)>500) { break; }
        count++;
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
