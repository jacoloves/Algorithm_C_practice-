#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
	int n,b;
	int cnt = 1;
	int ans = 0;
	cin >> n >> b;
	vector<int> N(n);
	
	rep(i, n) {
		cin >> N.at(i);
	}

	rep(i, n) {
		
		ans += N[i];
		if (ans <= b) {
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}