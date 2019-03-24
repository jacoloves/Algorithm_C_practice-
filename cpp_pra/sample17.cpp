#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    int answer = 0;

    for (int i = 0; i < 5; i++) {
        if (data.at(i) == a) {
            answer++;
        }
    }

    cout << answer << endl;
}