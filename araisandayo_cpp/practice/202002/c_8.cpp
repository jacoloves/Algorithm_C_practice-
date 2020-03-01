#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <map>

using namespace std;

typedef long long ll;

const int inf = 1000000000;

int main(void)
{
	int a;
	cin >> a;

	vector<int> v(a);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}

	int ans = inf;
	for (int i = a; i <= 100; i++) {
		int cost = 0;
		for (int j = 0; j < a; i++) {
			cost += (v[j] - i) * (v[j] - i);
			ans = min(ans, cost);
		}
	}
	cout << ans << endl;
	return 0;
}