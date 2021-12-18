#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int isPrime(ll n) {
    if (!(n%2)) { return 0; }
    for (ll i=3; i<sqrt(n)+1; i++) { if (!(n%i)) { return 0; } }
    return 1;
}

int main() {
    ll total = 1;
    ll num = 600851475143;
    for (ll i=3; i<sqrt(num)+1; i++) {
        if (!(num%i)) {
            if (isPrime(i)) { total = max(i, total); }
            if (isPrime(num/i)) { total = max(num/i, total); }
        }
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
