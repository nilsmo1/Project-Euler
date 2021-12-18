#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total = 0;
    int flag;
    for (ll c=1; c<1000; c++) {
        flag = 0;
        for (ll b=1; b<c; b++) { 
            if ((1000-b-c)*(1000-b-c) == c*c - b*b) { 
                total = (1000-b-c)*b*c; flag = 1; break;
            }
        }
        if (flag) { break; }
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
