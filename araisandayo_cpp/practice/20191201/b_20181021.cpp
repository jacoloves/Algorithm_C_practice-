#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
 
typedef long long ll;
 
using namespace std;
 
int main() {
	int a, b, cnt = 0;
	cin >> a >> b;
	
	vector<int> data(a);
	
	for (int i = 0; i < a; i++) {
		cin >> data[i];
	}
	
	for (int i = 0; i < a; i++) {
		if (data[i] >= b) {
			cnt++;
		}
	}
	
	cout << cnt << endl;
 
}