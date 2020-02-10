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

	vector<int> data1(a), data2(a);
	for (int i = 0; i < a; i++) {
		cin >> data1[i], --data1[i];
	}

	for (int i = 0; i < a; i++) {
		cin >> data2[i], --data2[i];
	}

	map<vector<int>, int> ord;
	int cnt = 0;

	vector<int> v(a);

	for (int i = 0; i < a; i++) {
		v[i] = i;
	}

	do{
		ord[v] = cnt++;
	}while(next_permutation(v.begin(), v.end()));

	cout << abs(ord[data1] - ord[data2]) << endl;



	return 0;
}