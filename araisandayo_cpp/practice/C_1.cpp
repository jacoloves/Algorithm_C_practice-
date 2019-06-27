#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<double, double> P;

int main()
{
	int a, b, c, d, flg;
	
	
	cin >> a >> b >> c >> d;
	
	if (c + c == a && d + d == b) {
		flg = 1;
	} else {
		flg = 0;
	}
	
	// •W€o—Í
	cout << double(a) * double(b) / 2;
	cout << " ";
	cout << flg << endl;
	
	return 0;
}

	