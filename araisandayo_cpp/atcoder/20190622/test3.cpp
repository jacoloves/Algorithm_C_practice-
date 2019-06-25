#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

ll f(ll x, int c, int d) {
    ll res = x;
     res -= x/c;
     res -= x/d;
     res += x/lcm(c, d);
     return res;
}

int main() {
    ll a, b;
    int c, d;
    cin >> a >> b >> c >> d;
    ll ans = f(b, c, d) - f(a-1, c, d);
    cout << ans << endl;
    return 0;
}