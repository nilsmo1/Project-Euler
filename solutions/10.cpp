#include <iostream>
#include <cmath>
using namespace std;
using ll = int64_t;
#define endline '\n';

int isPrime(ll n) {
    if (n==1) { return 0; }
    if (n==2) { return 1; }
    if (!(n%2)) { return 0; }
    for (ll i=3; i<sqrt(n)+1; i++) { if (!(n%i)) { return 0; } }
    return 1;
}

int main() {
    ll total = 0;
    ll count = 1;
    while (count<2e6) {
        count++;
        if (isPrime(count)) { total += count; }
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
