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
	int a;
	cin >> a;

	String str1, str2;

	cin >> str1 >> str2;

	vector<char> v;

	for (int i = 0; i < a; i++) {
		v.push_back(str1[i]);
		v.push_back(str2[i]);
	}

	for (int i = 0; i < a*2; i++) {
		cout << v[i];
	}
	cout << endl;

	return 0;
}