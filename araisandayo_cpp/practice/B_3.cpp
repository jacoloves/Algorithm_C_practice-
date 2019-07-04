#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<tuple<string, int , int>> a;

	for (int i = 1; i <= N; ++i) {
		string s;
		int p;

		cin >> s >> p;

		p = -p;

		a.push_back(tie(s, p, i));
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < N; i++) {
		cout << get<2>(a[i]) << endl;
	}
}