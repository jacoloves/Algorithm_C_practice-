#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str;
    vector<char> cN (30);
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str.at(i) == 'a' || str.at(i) == 'i' || str.at(i) == 'u' || str.at(i) == 'e' || str.at(i) == 'o') {
            // 処理スキップ
        } else {
            cN.at(cnt) = str.at(i);
            cnt++;
        }
    }
    
    for (int i = 0; i < cnt; i++) {
        cout << cN.at(i);
    }
    cout << endl;
}