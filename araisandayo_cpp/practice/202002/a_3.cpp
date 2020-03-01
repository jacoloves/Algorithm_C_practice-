#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long long ll;

int main(void)
{
	int a, b;
	cin >> a >> b;

	int yen = 0;
	yen = 500 * a;

	if(yen >= b) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}