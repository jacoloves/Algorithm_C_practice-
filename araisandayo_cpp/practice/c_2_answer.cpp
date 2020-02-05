#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    long long ac = 0;
    long long pena = 0;
        
    vector<long long> wa(N, 0), isac(N, 0);
    for (int i = 0; i < M; ++i) {
        int p; string s;
        cin >> p >> s;
        --p;
        if (s == "AC") {
            if (!isac[p]) {
                ++ac;
                pena += wa[p];
                isac[p] = true;
            }
        }
        else wa[p]++;
    }
    cout << ac << " " << pena << endl;
}