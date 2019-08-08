#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int a, b, c, ans;

    cin >> a >> b >> c;

    a -= b;

    ans = c - a;

    if(0 > ans) {
        ans = 0;
    }

    cout << ans << endl;

    return 0;

}