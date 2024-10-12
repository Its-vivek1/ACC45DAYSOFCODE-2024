#include <bits/stdc++.h>
using namespace std;

int minimumBagsNeeded(int N, int K, int M) {
    int capacity_per_bag = K * M;
    return (N + capacity_per_bag - 1) / capacity_per_bag;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, K, M;
        cin >> N >> K >> M; 
        cout << minimumBagsNeeded(N, K, M) << endl; 
    }
    return 0;
}
