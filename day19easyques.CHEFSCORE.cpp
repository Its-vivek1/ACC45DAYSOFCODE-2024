#include <bits/stdc++.h>
#include <vector>

using namespace std;

void canAchieveMarks(int T, vector<tuple<int, int, int>>& test_cases) {
    for (int i = 0; i < T; i++) {
        int N, X, Y;
        tie(N, X, Y) = test_cases[i];

        // Check if Y is a multiple of X
        if (Y % X == 0) {
            int k = Y / X;
            // Check if k is within the bounds [0, N]
            if (k >= 0 && k <= N) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    vector<tuple<int, int, int>> test_cases(T);
    for (int i = 0; i < T; i++) {
        int N, X, Y;
        cin >> N >> X >> Y;
        test_cases[i] = make_tuple(N, X, Y);
    }

    canAchieveMarks(T, test_cases);
    
    return 0;
}
