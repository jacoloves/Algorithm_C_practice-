#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a, b, ans = 0;
	cin >> a >> b; 

	if (a <= 0 || a >= 10 || b <= 0 || b >= 10 ) {
		cout << -1 << endl;
	} else {
		ans = a * b;
		cout << ans << endl;
	}
}