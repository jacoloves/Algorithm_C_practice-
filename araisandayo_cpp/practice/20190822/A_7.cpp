#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans, s, d;
    
    ans = abs(a-b);
 
    ans = ans/2;

    if (a > b) {
        s = a - ans;
        d = b + ans;
    } else {
        s = b - ans;
        d = a + ans;
    }

    if (s == d) {
        cout << s << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    

    return 0;
    
}