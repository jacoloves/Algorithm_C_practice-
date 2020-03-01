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

    int cnt = 0;

    while(1) {
        a = a-2;
        cnt++;
        if (a <= 0) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}