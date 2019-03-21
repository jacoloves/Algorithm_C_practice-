#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> vec = {A, B, C};

    sort(vec.begin(), vec.end());

    // 大きい数-小さい数を実施
    cout << vec.at(2) - vec.at(0) << endl; 
}