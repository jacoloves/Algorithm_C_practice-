#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	ll a, b, c, d, ans1, ans2;
	cin >> a;
	ans2 = a;

	for (int i = 1; i <= a; i++) {
		b = a / i;
		ans1 = i + b - 2;
		if (ans1 < ans2) {
			ans2 = ans1;
		}
	}

	cout << ans2 << endl;

}