#include <iostream>
using namespace std;
using ll = int64_t;
#define endline '\n';

int main() {
    ll total;
    ll n = 100;
    ll f1 = n*n - 1;
    ll f2 = 3*n*n + 2*n;
    total = f1*f2/12;
    cout << "ANSWER: " << total << endline;
    return 0;
}
/*
Thoughts: 
Sum of squares:
    n(n+1)(2n+1)/6 = 
    (n²+n)(2n+1)/6 =
    2n³+n²+2n²+n/6 =
       2n³+3n²+n/6

Square of sum:
    (n(n+1)/2)² =
      (n²+n/2)² =
    n⁴+2n³+n²/4 =

Differance:
    n⁴+2n³+n²/4 - 2n³+3n²+n/6 =
    3n⁴+6n³+3n²-4n³-6n²-2n/12 =
            3n⁴+2n³-3n²-2n/12 =
        3n²(n²-1)+2n(n²-1)/12 =
            (n²-1)(3n²+2n)/12
(n = 100)
*/
