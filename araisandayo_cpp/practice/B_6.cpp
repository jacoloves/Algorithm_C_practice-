#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

using namespace std;

void tswap(vector<int>& data, int a, int b, int N);

int main()
{
    int N;
    int cnt = 0;
    int flg = 0;
    cin >> N;

    vector<int> data(N);
    vector<int> data2(N);

    for (int i = 0; i < N; i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i < N; i++) {
        data2.at(i) = data.at(i);
    }

    sort(data2.begin(), data2.end());

    for (int i = 0; i < N; i++) {
        if (data.at(i) != data2.at(i) && cnt == 0) {
            // 入れ替え
            tswap(data, data.at(i), data2.at(i), N);
            // 1回しか実施できない
            cnt++;
        }
    }


    for (int i = 0; i < N; i++) {
        if (data.at(i) != data2.at(i)) {
            cout << "NO" << endl;   
            flg = 1;         
            break;
        }
    }

    if (flg == 0) {
        cout << "YES" << endl;   
    }


    return 0;
    
}

void tswap(vector<int>& data, int a, int b, int N)
{
    int tmp, num1, num2;

    for (int i = 0; i < N; i++) {
        if (data[i] == a) {
            num1 = i;
            tmp = data[i];
        } else if (data[i] == b) {
            num2 = i;
        }
    }

    tmp = data.at(num1);
    data.at(num1) = data.at(num2);
    data.at(num2) = tmp;
}