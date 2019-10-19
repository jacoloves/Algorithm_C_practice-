#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, b, ans;
	cin >> a >> b;

	if ((a - 2*b) > 0) {
		ans = a - 2*b;
	} else {
		ans = 0;
	}

	cout << ans << endl;
}