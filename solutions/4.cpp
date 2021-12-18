#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using ll = int64_t;
#define endline '\n';

int isPalindrome(int n) {
    string s   = to_string(n);
    string tmp = s;
    reverse(s.begin(), s.end());
    return s==tmp;
}

int main() {
    int total = 0;
    for (int i=999; i>99; i--) {
        for (int j=999; j>99; j--) {
            if (isPalindrome(i*j)) { total = max(i*j, total); }
        }
    }
    cout << "ANSWER: " << total << endline;
    return 0;
}
