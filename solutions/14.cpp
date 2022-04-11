#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll collatz(ll l) {
    ll total=0;
    while (l!=1) {
        if (l%2==0) { l/=2;total++; }
        else     { l=3*l+1;total++; }
    }
    return total;
}

int main() {
    ll max = 0;
    ll num = 1;
    for (int i=1; i<1000000; i++) {
        ll val = collatz(i);
        if (val > max) { max = val; num = i; }
    }
    cout << "ANSWER: " << num << endline;
