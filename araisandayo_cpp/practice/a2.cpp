#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main() {
    int a;
    string b;

    cin >> a;
    cin >> b;

    if (a >= 3200)
    {
        cout << b << endl;
    } else {
        cout << "red" << endl;
    }

    return 0;
}