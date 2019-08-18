#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <string>

typedef long long ll;

using namespace std;

int main() {
    int A;
    string str;

    cin >> A;
    cin >> str;

    if (A < 3200) {
        cout << "red" << endl;
    } else {
        cout << str << endl;
    }

    return 0;
}
