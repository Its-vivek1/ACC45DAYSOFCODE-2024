#include <bits/stdc++.h>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int T;
    cin >> T; 

    vector<int> results; 

    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y; 

        int minWins = max(0, X - Y);
        results.push_back(minWins);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
