#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	int a, flg=0;
	cin >> a;

	if (a % 2 != 0) {
		cout << "No" << endl;
	} else {
		string smp;
		cin >> smp;

		int b = a / 2;

		vector<char> data(b);
		vector<char> data2(b);

		// T1のパーツ
		for (int i  = 0; i < b; i++) {
			data[i] = smp[i];
		}

		// T2のパーツ
		int cnt = 0;
		for (int i = b; i < a; i++) {
			data2[cnt] = smp[i];
			cnt++;
		}

		for (int i = 0; i < b; i++) {
			if (data[i] != data2[i]) {
				flg = 1;
				break;
			}
		}

		if (flg == 1) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}
}