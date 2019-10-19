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

	string str, str2;

	cin >> str;

	int cnt = 0, pos = 0;
	int i;
	for (i = pos; i <= a-1; i++) {
		int j;
		for (j = i+1; j < a; j++) {
			if (str[i] != str[j]) {
				cnt++;
				break;
			} 
		}
		pos = j;
		i = pos-1;
	}

	cnt++;

	cout << cnt << endl;

}