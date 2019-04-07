#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int cnt = 0;
    vector<int> keika(5);
    vector<int> route(6);

    cin >> N;

    for (int i = 0; i < keika.size(); i++) {
        cin >> keika.at(i);
    }

    route.at(0) =  N;

    // たいむ0
    if (N - keika.at(0) <= 0) {
        route.at(1) = N;
        route.at(0) = 0;
    } else {
        route.at(0) = N - keika.at(0);
        route.at(1) = keika.at(0);
    }

    while(true) {
        for (int i = route.size() - 1; i >= 0; i--) {
            if (0 < route.at(i)) {
                if (route.at(i) - keika.at(i) <= 0) {
                    route.at(i + 1) = keika.at(i);
                    route.at(i) = 0;
                } else {
                    route.at(i + 1) = keika.at(i);
                    route.at(i) = route.at(i) - keika.at(i);
                }
            }
        }
    }
    

}