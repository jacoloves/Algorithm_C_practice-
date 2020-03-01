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
    int a, b;
    cin >> a;
    cin >> b;
    int cnt = 0;

    if ((a+b) == 3) {
        cnt = 3;
    } else if((a+b) == 4) {
        cnt = 2;
    } else if((a+b) == 5) {
        cnt = 1;
    }

    cout << cnt << endl;

    return 0;
}