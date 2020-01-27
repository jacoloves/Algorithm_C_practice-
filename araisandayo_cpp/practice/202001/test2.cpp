#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        a[i]--;
    }

    for (int i = 0; i < N - 1; i++) {
        cout << a[i]+1 << endl;
        cout << a[i+1] << endl;
    }

    return 0;
}