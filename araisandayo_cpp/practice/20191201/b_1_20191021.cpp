#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	for (int i = 0; i < 10; i++) {
		 c = a * c - b;
		 cout << c << endl;
	}
}