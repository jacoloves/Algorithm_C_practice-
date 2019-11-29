#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	ll N;
    cin >> N;
    ll ans = N - 1;
    for (ll i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            ans = min(ans, i + N / i - 2);
        }
    }
    cout << ans << "\n";
    return 0;

}