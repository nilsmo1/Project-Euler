#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total = 0;
    for (int i=3; i<1000; i++) {
        total += (i%3==0 || i%5==0)*i;
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
