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
    int ans = 0;
    if (str == "SUN") {
        ans = 7;
    } else if (str == "MON") {
        ans = 6;
    } else if (str == "TUE") {
        ans = 5;
    } else if (str == "WED") {
        ans = 4;
    } else if (str == "THU") {
        ans = 3;
    } else if (str == "FRI") {
        ans = 2;
    } else if (str == "SAT") {
        ans = 1;
    }

    cout << ans << endl;
}