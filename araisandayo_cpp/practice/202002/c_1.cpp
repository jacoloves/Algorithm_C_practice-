#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long long ll;

/*
* 参考サイト
* http://drken1215.hatenablog.com/entry/2020/01/22/120400
*/

int main(void)
{
	int a;
	cin >> a;
	int bi = a+1, res = 0;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		bi = min(bi, c);
		if (bi == c)
			++res;
	}

	cout << res << endl;
	return 0;
}