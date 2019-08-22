#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;

int main()
{
    int N;
    cin >> N;

    vector<int> data(N);
    vector<int> data2(N);

    for (int i = 0; i < N; i++) {
        cin >> data[i];
        data2[i] = data[i];
    }

    sort(data2.begin(), data2.end(), greater<int>());

    for (int i = 0; i < N; i++) {
        if (data[i] == data2[0]) {
            cout << data2[1] << endl; 
        } else {
            cout << data2[0] << endl;
        }
    }

}

