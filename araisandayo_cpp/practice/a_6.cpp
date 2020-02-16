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
    int a,b,c;
    cin >> a >> b >> c;

    if ((a == b) && (b == c)) {
        cout << "No" << endl;
    } else if((a == b) || (a == c) || (b == c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}