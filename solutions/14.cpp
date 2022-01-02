#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll collatz(ll n) {
    ll count = 1;
    while (n!=1) {
        if (n%2) { n = 3*n + 1; }
        else     { n = n/2; }
        count++;
    }
    return count;
}

int main() {
    ll total = 1;
    for (ll i=1; i<1000000; i++) {
        if (collatz(i) > collatz(total)) {
            total = i;
        } 
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
