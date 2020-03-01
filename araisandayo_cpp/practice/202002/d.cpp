#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>

typedef long long ll;

using namespace std;

void frac(int a, ll& res) {
    res++;
    if (a > 1) {
        frac(a / 2, res);
        frac(a / 2, res);
    }
    
}

int main(void)
{
    int a;
    ll result=0;
    cin >> a;

    frac(a, result);

    cout << result << endl;

    return 0;
}