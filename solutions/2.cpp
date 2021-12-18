#include <iostream>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total = 2;
    vector<ll> fib{1,2};
    while (1) {
        int size = fib.size();
        ll new_fib = fib[size-1]+fib[size-2];
        if (new_fib >= 4e6) { break; }
        fib.push_back(new_fib);
        if (!(new_fib%2)) { total+= new_fib; }
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
