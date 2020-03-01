#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <map>
typedef long long ll;

using namespace std;

int main(void)
{
    int a;
    cin >> a;

    vector<int> v(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += pow(abs(v[i]-a), 2.0);
    }

    cout << sum << endl;

    return 0;
}