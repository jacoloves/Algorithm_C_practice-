    #include <iostream>
    #include <vector>

    using namespace std;

    int main() {
        int N; cin >> N;
        int cnt = 0;
        vector<int> data(N);

        for (int i = 0; i < N; i++) {
            cin >> data.at(i);
        }

        for (int i = 1; i < N-1; i++) {
            
            if ((data.at(i-1) < data.at(i) && data.at(i) < data.at(i+1)) || (data.at(i-1) > data.at(i) && data.at(i) > data.at(i+1)))  {
                cnt++;
            }
        }
        
        cout << cnt << endl;

        return 0;
    }
