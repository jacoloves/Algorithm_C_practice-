#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    string str, ans;

	cin >> str;

	if (str == "Sunny") {
		ans = "Cloudy";
	} else if (str == "Cloudy") {
		ans = "Rainy";
	} else {
		ans = "Sunny";
	}

	cout << ans << endl;
	
	return 0;
}