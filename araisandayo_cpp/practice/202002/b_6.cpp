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

int main(void)
{
	ll a, b, c;
	cin >> a >> b >> c;

	int flg = 0;

	if (a >= c) {
		a = a-c;
		flg = 1;
	} else {
		c = c-a;
		a = 0;
	}

	if (flg == 0) {
		if (b >= c) {
			b = b-c;
		}else {
			b = 0;
		}
	}

	cout << a << " " << b << endl;

	return 0;
}