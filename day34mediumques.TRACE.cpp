#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int max_trace(int N, vector<vector<int>>& matrix) {
    int max_trace_value = -1e9; 
    
    for (int l = 1; l <= N; ++l) {
        for (int r = 0; r <= N - l; ++r) {  
            for (int c = 0; c <= N - l; ++c) {
                int trace = 0;
                for (int i = 0; i < l; ++i) {
                    trace += matrix[r + i][c + i];  
                }
                max_trace_value = max(max_trace_value, trace);
            }
        }
    }
    
    return max_trace_value;
}

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        vector<vector<int>> matrix(N, vector<int>(N));
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        cout << max_trace(N, matrix) << endl;
    }
    
    return 0;
}
