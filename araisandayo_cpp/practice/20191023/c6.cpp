#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int n,  q;
    ll k;
    cin >> n >> k >> q;

    vector<int> a(n+1);
    vector<int> b(q);

    for (int i = 1; i < n+1; i++) {
        a[i] = k;
    }

    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < q; i++) {
        for (int j = 1; j < n+1; j++) {
            if (b[i] != j) {
                a[j]--;
            } 
        }
    } 

    for (int i = 1; i < n+1; i++) {
        if (a[i] > 0) {
            cout << "Yes" << endl;
        }  else {
            cout << "No" << endl;
        }
    }
}
