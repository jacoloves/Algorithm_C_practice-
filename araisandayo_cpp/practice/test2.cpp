#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    vector<int> data(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] << endl;
        a[i]--;
        cout << a[i] << endl;
    }

    return 0;
}