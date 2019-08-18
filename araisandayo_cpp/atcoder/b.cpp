#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <string>

typedef long long ll;

using namespace std;

int main() {
    int A;
    double ans = 0.0, ans2;
    cin >> A;

    int num[A];

    for (int i = 0; i < A; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < A; i++) {
        ans +=  1.0 / num[i];
    }

    ans2 = 1.0 / ans;

    cout << ans2 << endl;


    return 0;
}
