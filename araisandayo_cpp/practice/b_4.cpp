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

    vector<char> data(str.size());

    for (int i = 0; i < str.size(); i++) {
        data[i] = 'x';
    }

    for (int i = 0; i < str.size(); i++) {
        cout << data[i];
    }

    cout << endl;

    return 0;
}