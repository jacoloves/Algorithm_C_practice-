#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int a;

    double ans = 0.0, ans2;

    cin >> a;

    vector<int> data(a);

    for (int i = 0; i < a; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < a; i++) {
       ans +=  1.0 / data[i];
    }

    ans2 = 1.0 / ans;

    cout << ans2 << endl;

    return 0;
}