#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, int> frequency; 
        for (int i = 0; i < N; ++i) {
            int card;
            cin >> card; 
            frequency[card]++; 
        }

        int max_count = 0; 
        for (const auto& pair : frequency) {
            if (pair.second > max_count) {
                max_count = pair.second;
            }
        }

        int min_moves = N - max_count; 
        cout << min_moves << endl; 
    }

    return 0;
}
