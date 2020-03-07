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
    ll a, b, c;
    cin >> a >> b >> c;
    ll cnt = 0;
    ll sum = c + b;

    if (b == 0) {
        cout << cnt << endl;
    } else {
        while(1) {
            cout << sum << endl;
            if (a < sum) {
                if (a < b) {
                    cnt += a;
                } else {
                    cnt += b;
                }
                break;
            } else {
                a -= sum;
                cnt += b;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}