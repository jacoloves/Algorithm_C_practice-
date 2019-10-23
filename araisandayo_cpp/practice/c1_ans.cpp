#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
    int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	vector<int> rev(N);
	for (int i = 0; i < N; i++) {
		rev[A[i]-1]=i+1;
	}

	for (int i = 0; i < N; i++) {
		cout << rev[i] << endl;
	}

	return 0;

}