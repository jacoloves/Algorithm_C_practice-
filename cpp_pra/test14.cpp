#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<int> data(5);
    vector<int> data2(5);
    int ans, tmp, sum, min;

    for (int i = 0; i < data.size(); i++) {
        cin >> data.at(i);
    }

    for (int i = 0; i < data2.size(); i++) {
        ans = 0;
        tmp = 0;
        if (data.at(i) % 10 != 0) {
            if (data.at(i) > 10) {
                tmp = data.at(i) - data.at(i) % 10;
                ans = data.at(i) % 10;
                ans += 10 - ans;
                ans += tmp;
            } else {
                ans = data.at(i) % 10;
                ans += 10 - ans;
            }
            data2.at(i) = ans;
        } else {
            data2.at(i) = data.at(i);
        }
        
    }


    for (int i = 0; i < data.size(); i++) {
        sum = 0;
        if (i == 0) {
            sum += data.at(i);
            for (int j = 1; j < data2.size(); j++) {
                sum += data2.at(j);
            }
            // 初回は必ずminに代入
            min = sum;
        } else if (i == 1) {
            sum += data.at(i);
            for (int j = 0; j < i; j++) {
                sum += data2.at(j);
            }

            for (int k = i + 1; k < data2.size(); k++) {
                sum += data2.at(k);
            }

            if (sum < min) {
                min = sum;
            }
        } else if (i == 2) {
            sum += data.at(i);
            for (int j = 0; j < i; j++) {
                sum += data2.at(j);
            }

            for (int k = i + 1; k < data2.size(); k++) {
                sum += data2.at(k);
            }

            if (sum < min) {
                min = sum;
            }
        } else if (i == 3) {
            sum += data.at(i);
            for (int j = 0; j < i; j++) {
                sum += data2.at(j);
            }

            for (int k = i + 1; k < data2.size(); k++) {
                sum += data2.at(k);
            }

            if (sum < min) {
                min = sum;
            }
        } else if (i == 4) {
            sum += data.at(i);

            for (int j = 0; j < i; j++) {
                sum += data2.at(j);
            }

            if (sum < min) {
                min = sum;
            }
        }
    }
    
    cout << min << endl;
}