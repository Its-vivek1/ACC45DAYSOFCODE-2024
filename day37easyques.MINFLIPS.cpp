#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int N;
        cin >> N; 
        
        vector<int> A(N);
        int sum = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }
        
        if (sum % 2 != 0) {
            cout << -1 << endl;
        } else {
            int count_1 = 0;
            for (int i = 0; i < N; i++) {
                if (A[i] == 1) {
                    count_1++;
                }
            }
            
            int target_1s = N / 2; 
            
            int flips = abs(count_1 - target_1s);
            cout << flips << endl;
        }
    }
    
    return 0;
}
