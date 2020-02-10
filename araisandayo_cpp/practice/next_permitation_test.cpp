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
	int array[] = {1, 2, 3};
	int cnt = 0;
	do
	{
		/* code */
		for (int i = 0; i < 3; i++) {
			cout << array[i];
			if(i!=2)
				cout << " ";
		}
		cout << endl;
		cnt++;
	} while (next_permutation(array, array+3));
	cout << cnt << endl;
	return 0;
}