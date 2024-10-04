#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N); 

        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }

        string result; 

        for (int i = 0; i < N; ++i) {
            if (K >= A[i]) { 
                result += '1'; 
                K -= A[i]; 
            } else {
                result += '0';
            }
        }

        cout << result << endl; 
    }

    return 0;
}
