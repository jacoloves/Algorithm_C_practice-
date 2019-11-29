#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	int a;
	cin >> a;

	if (a % 2 != 0) {
		cout << "No" << endl;
	} else {
		string smp;
		cin >> smp;

		int b = a / 2;

		vector<char> data(b);

		for (int i = 0; i < b; i++) {
			data[i] = smp[i];
		}

		for (int i = 0; i < b; i++) {
			data[b+i] = smp[i];
		}

		for (int i = 0; i < a; i++) {
			cout << data[i];
		}

		cout << endl;

	}
	


}