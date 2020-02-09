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
    string str1, str2;
    cin >> str1 >> str2;

    int a, b;
    cin >> a >> b;

    string str3;
    cin >> str3;

    if (str1 == str3) {
        a--;
    }else {
        b--;
    }

    cout << a << ' ' << b << endl;

    return 0;
}