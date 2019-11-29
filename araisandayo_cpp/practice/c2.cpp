#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	int a, flg = 0, ans = 0;

	cin >> a;

	for (int i = 1; i <= 9; i++) {
		ans = a / i;
		if (a == ( ans * i ) && ans > 0 && ans < 10  ) {
			cout << "Yes" << endl;
			break;
		}

		if (i == 9) {
			flg = 1; 
		}
	}

	if (flg == 1) {
		cout << "No" << endl;
	}

}