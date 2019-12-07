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
    string str;

    cin >> str;
    int ans;
    if (str == "SUN") {
        ans = 7;
    } else if (str == "MON") {
        ans = 6;
    } else if (str == "TUE") {
        ans = 5;
    } else if (str == "WED") {
        ans = 4;
    }
}