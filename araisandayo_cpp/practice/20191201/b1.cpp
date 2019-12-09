#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, b;
	cin >> a;

	string s;
	cin >> a;

	b = a / 2;

	vector<string> A(b);
	vector<string> C(b);

	for (int i = 0; i < b; i++) {
		A[i] = s[i];
	}

	int cnt = 0;
	for (int i = b; i < a; i++) {
		C[cnt] = s[i];
		cnt++;
	}

	if (b != 0 || a % 2 != 0) {
		cout << "No" << endl;
	}

	if (equal(A.cbegin(), A.cend(), C.cbegin())) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}



}