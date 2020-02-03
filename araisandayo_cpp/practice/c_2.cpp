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
	int cnt = 0;

	vector<int> data(b);
	vector<string> acwa(b);

	for (int i = 0; i < b; ++i)
	{
		/* code */
		cin >> data[i] >> acwa[i];
	}

	vector<char> vc(a);

	for (int i = 0; i < a; ++i)
	{
		/* code */
		vc[i] = 'w';
	}

	int wa = 0;
	int ac = 0;

	for (int i = 0; i < b; ++i)
	{
		/* code */
		if (acwa[i] == "WA" && vc[data[i]] == 'w') {
			wa++;
		} else if (acwa[i] == "AC" && vc[data[i]] == 'w') {
			ac++;
			vc[data[i]] == 'a';
		}
	}

	cout << ac;
	cout << wa << endl;

	return 0;
}