#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

typedef long long ll;

using namespace std;

int main(void)
{
	int a, b;
	string str1, str2;
	cin >> a >> b;

	str1 = to_string(a);
	str2 = to_string(b);

	if (str1 >= str2) {
		for (int i=0; i<a; i++) {
			cout << b;
		} 
	} else {
		for (int i=0; i<b; i++) {
			cout << a;
		}
	}

	cout << endl;

	return 0;
}