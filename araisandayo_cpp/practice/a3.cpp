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
    int a, b, c, tmp;
    cin >> a >> b >> c;

    tmp = 0;

    tmp = a;
    a = c;
    c = b;
    b = tmp;

    cout << a << " " << b << " " << c << endl;

    return 0;
}