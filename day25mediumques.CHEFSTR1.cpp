#include <bits/stdc++.h>
#include <vector>
#include <cstdlib> 
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        vector<int> strings(N);
        for (int i = 0; i < N; ++i) {
            cin >> strings[i];
        }

        long long totalSkips = 0;

        for (int i = 0; i < N - 1; ++i) {
            totalSkips += abs(strings[i] - strings[i + 1]) - 1;
        }

        cout << totalSkips << endl; 
    }

    return 0;
}
