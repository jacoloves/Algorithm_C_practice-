#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> num(n, 0);

    for (int i = 0; i < q; ++i) {
        int a;
        cin >> a;
        --a;
        num[a]++;
    }

    for (int i = 0; i < n; i++) {
        if(k-(q-num[i]) <= 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}
