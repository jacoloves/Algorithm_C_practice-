#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	int n,b;
	int cnt = 0;
	int ans = 0;
	cin >> n >> b;
	vector<int> N(n);
	
	rep(i, n) {
		if (ans >= b) {
			cnt++;
		}
		ans += N.at(i);
	}
	
	cout << cnt << endl;
	
	return 0;
}