#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        a[i]--;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += b[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i]+1 == a[i+1]) {
            ans += c[a[i]];
        }
    }

    cout << ans << endl;

    return 0;
}