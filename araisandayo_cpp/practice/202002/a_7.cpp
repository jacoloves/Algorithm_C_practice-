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
    int a,b;
    cin >> a >> b;

    if (a < 10) {
        b = b + (100*(10-a));
    }

    cout << b << endl;

    return 0;
}