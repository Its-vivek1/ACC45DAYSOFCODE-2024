#include <bits/stdc++.h>
#include <vector>

using namespace std;

void recover_array(int T) {
    while (T--) {
        int N;
        cin >> N;
        vector<long long> B(N);
        long long total_B = 0;

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
            total_B += B[i];
        }

        long long S = total_B / (N + 1);
        
        vector<long long> A(N);
        for (int i = 0; i < N; ++i) {
            A[i] = B[i] - S;
        }

        for (int i = 0; i < N; ++i) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    recover_array(T);
    return 0;
}
