#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int N, D;
	cin >> N >> D;
	vector<vector<int > > x(N, vector<int>(D));
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < D; ++j) {
			cin >> x[i][j];
		}
	}
	
	int ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i+1; j < N; ++j) {
			int norm = 0; 
			for (int k = 0; k < D; ++k) {
				int diff = abs(x[i][k] - x[j][k]);
				norm += diff * diff;
			}
			
			bool flag = false;
			for (int k = 0; k <= norm; ++k) {
				if (k * k == norm) {
					flag = true;
				}
			}
			
			if (flag) ++ans;
		}
	}
	
	cout << ans << endl;
}
