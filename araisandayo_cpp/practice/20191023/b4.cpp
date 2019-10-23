#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, b, ans = 0, cnt = 0;

    cin >> a >> b;

    while (1)
    {
        if (b == 1) {
            ans = 0;
            break;
        }

        ans += a;
        cnt++;
        if (b <= ans) {
            break;
        }

        ans--;
    }

    cout << cnt << endl;

    return 0;
}