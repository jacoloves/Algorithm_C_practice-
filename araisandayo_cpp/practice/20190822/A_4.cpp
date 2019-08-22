#include <iostream>

using namespace std;

int main()
{
	int N, A, B, ans;
	
	cin >> N >> A >> B;
	
	ans = N * A;
	
	cout << (ans > B ? B : ans) << endl;
	
	return 0;
}
