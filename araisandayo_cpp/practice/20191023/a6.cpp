#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, cnt = 0;
	double ans;

	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (i % 2 != 0) {
			cnt++;
		}
	}

	ans = (double)cnt / a;

	cout << ans << endl;
}