#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> data(N);

    for (int i = 0; i < data.size; i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i < data.size; i++) {
        cout << data.at(i) << endl;
    }

    sort(data.begin(), data.end());

    cout << "ソート後" << endl;

    for (int i = 0; i < data.size; i++) {
        cout << data.at(i) << endl;
    }

    return 0;
    
}