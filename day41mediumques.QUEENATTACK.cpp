#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;  
        
        int horizontal_vertical_attacks = 2 * (N - 1);
        
        int diagonal1 = min(X - 1, Y - 1) + min(N - X, N - Y);  
        int diagonal2 = min(X - 1, N - Y) + min(N - X, Y - 1); 
        
        int total_attacks = horizontal_vertical_attacks + diagonal1 + diagonal2;
        
        cout << total_attacks << endl;
    }

    return 0;
}
