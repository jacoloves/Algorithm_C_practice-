#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
	int n;
	int min, ans;
	int sum1 = 0;
	int sum2 = 0;
	cin  >> n;
	
	vector<int> data(n);
	
	rep(i, n) {
		cin >> data.at(i);
	}
	
	rep(i, n) {
		sum1 += data.at(i);
		for (int j = i + 1; j < n; j++) {
			sum2 += data.at(j);
		}
		
		if (sum1 < sum2) {
			min = sum2 - sum1;
		} else {
			min = sum1 - sum2;
		}
		
		// ‰‰ñƒ‹[ƒv‚Ì‚İ
		if (i == 0) {
			ans = min;
		} else {
			if (ans > min) {
				ans = min;
			}
		}
		
		// sum2‚ğ‰Šú‰»
		sum2 = 0;
	}
	
	cout << ans << endl;
	
	return 0;
}