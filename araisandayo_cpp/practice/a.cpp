#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

typedef long long ll;

using namespace std;

int main(void)
{
    int a, b, cnt = 0;
    cin >> a >> b;

    while(1) {
        a -= b;
        cnt++;
        if(a <= 0) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}