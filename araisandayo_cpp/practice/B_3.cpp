#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef pair<pair<string , int>, int> p[110];

int main()
{
	int a; cin >> a;
	for (int i = 0; i < a; i++)
	{
		int t; cin >> t;
		string tmp; cin >> tmp;
		
		p[i] = make_pair(make_pair(int, -t), i);
	}
	sort(p,p+a);
	for (int i = 0; i < a; i++) {
		printf("%d\n", p[i].second+1);
		cout << p[i].second+1 << endl;
	}
	
	return 0;
} 