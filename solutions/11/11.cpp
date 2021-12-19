#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = int64_t;
#define endline '\n';

ll maxDiags(int size, vector<vector<ll>> arr) {
    ll diagright, diagleft, prod;
    diagright = 0;
    for (int i=0; i<size-3; i++) {
        for (int j=0; j<size-3; j++) {
            prod = arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            diagright = max(prod, diagright);
        }
    }
    diagleft = 0;
    for (int i=0; i<size-3; i++) {
        for (int j=3; j<size; j++) {
            prod = arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
            diagleft = max(prod, diagleft);
        }
    }
    return max(diagright, diagleft);
}
ll maxRowCols(int size, vector<vector<ll>> arr) {
    ll rowprod, colprod, prod;
    rowprod = 0;
    for (int i=0; i<size; i++) {
        for (int j=0; j<size-4; j++) {
            prod = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            rowprod = max(prod, rowprod);
        }
    }
    colprod = 0;
    for (int i=0; i<size-4; i++) {
        for (int j=0; j<size; j++) {
            prod = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            colprod = max(prod, colprod);
        }
    }
    return max(rowprod, colprod);
}

int main() {
    ll total;
    int size = 20;
    vector<vector<ll>> arr(size, vector<ll>(size, 0));
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) { cin >> arr[i][j]; }
    }
    total = max(maxDiags(size, arr), maxRowCols(size, arr));
    cout << "ANSWER: " << total << endline;
    return 0;
}
