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

	int b = sqrt(a);

	int tmp = a;

	if (a != 2) {
		vector<int> v;
		v.push_back(2);


		for (int i = 3; i <= b; i++) {
			if (i % 2 != 0)
				v.push_back(i);
		}

		while(1) {
			int cnt = 0;
			for (int i = 0; i < v.size(); i++) {
				if (tmp % v[i] != 0) {
					cnt++;
				}
			}

			if (cnt == v.size())
				break;

			tmp++;
		}
	}
		

	cout << tmp << endl;

	return 0;
}