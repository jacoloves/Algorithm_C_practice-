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
	int a;
	cin >> a;

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < a-2; i++) {
		if (str[i] == 'A') {
			if (str[i+1] == 'B') {
				if (str[i+2] == 'C') {
					cnt++;
				}
			}
		}
	}

	cout << cnt << endl;

	return 0;
}