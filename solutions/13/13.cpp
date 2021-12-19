#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total = 0;
    for (int i=0; i<100; i++) {
        string s;
        cin >> s;
        ll conv = stoll(s.substr(0,11));
        total += conv;
    }
    string conv = to_string(total).substr(0,10);
    cout << "ANSWER: " << conv << endline;
    return 0;
}
