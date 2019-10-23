#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, ans = 0;
	cin >> a;

	vector<int> data(a);

	for (int i = 0; i < a; i++) {
		cin >> data[i];
	}

	for (int i = 0; i < a-1; i++) {
		for (int j = i+1; j < a; j++) {
			if ((data[i] == 0) || (data[j] == 0)) {
				continue;
			}

			ans += data[i] * data[j];
		}
	}

	cout << ans << endl;
}