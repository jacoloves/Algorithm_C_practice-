#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int a;
	cin >> a;

	vector<int> data1(a);
	vector<int> data2(a);
	vector<int> data3(a);

	for (int i = 0; i < a; i++) {
		data1[i] = i+1;
	}

	for (int i = 0; i < a; i++) {
		cin >> data2[i];
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (data1[i] == data2[j]) {
				data3[i] = data1[j];
			}
		}
	}

	for (int i = 0; i < a; i++) {
		cout << data3[i];
		cout << " ";				
	}

	cout << endl;

}