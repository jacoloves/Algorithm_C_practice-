#include <stdio.h>
#include <isotream>
#include <vector>
#include <algorithm>
#icnlude <string>

#using namespace std;

char in[120];
pair<pair<string , int>, int> p[110]

int main()
{
	int a; cin >> a;
	for (int i = 0; i < a; i++)
	{
		int t; cin >> t;
		cin >> in;
		
		string tmp = in;
		p[i] = make_pair(make_pair(int, -t), i);
	}
	sort(p,p+a);
	for (int i = 0; i < a; i++) {
		printf("%d\n", p[i].second+1);
	}
} 