#include <iostream>
#include <vector>

using namespace std;

int main() {
	int p, q, r, min;
	int flg = 0;
	cin >> p >> q >> r;
	
	vector<int> N{p, q, r};
	
	for (int i = 0; i < 2; i++) {
		for (int j = i+1; j < 3; j++) {
			if (flg == 0) {
				min = N.at(i) + N.at(j);
				flg = 1;
			} else {
				if (min > N.at(i) + N.at(j)) {
					min = N.at(i) + N.at(j);
				}
			}
		}
	}
	
	cout << min << endl;
	
	return 0;
} 