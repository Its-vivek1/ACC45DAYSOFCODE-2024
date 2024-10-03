#include <iostream>
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

        int score_A_first = 1500 - 6 * X - 4 * Y;
        int score_B_first = 1500 - 6 * Y - 2 * X;

        int max_score = max(score_A_first, score_B_first);
        results.push_back(max_score);
    }


    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
