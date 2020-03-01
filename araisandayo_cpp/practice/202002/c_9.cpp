#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <map>

#define rep(i, c) for(int i = 0; i < (int)c; i++)

using namespace std;

const int inf = 1000000000;

typedef long long ll;

int main(void)
{
	int a;
	cin >> a;

	vector<int> v(a);
	rep(i, a) {
		cin >> v[i];
	}

	int L = v[0], R = v[0];

	rep(i, a) {
		L = min(L, v[i]);
		R = max(R, v[i]);
	}

	int ans = inf;

	for (int i = 0; i <= R; i++) {
		int cost = 0;
		rep(j, a) {
			cost += (v[j] - i) * (v[j] - i);
			ans = min(ans, cost);
		}
	}
	cout << ans << endl;

	return 0;
}