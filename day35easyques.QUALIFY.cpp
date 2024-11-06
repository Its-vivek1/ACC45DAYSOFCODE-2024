#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;  
        
        int score = A * 1 + B * 2;
        
        if (score >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }
    
    return 0;
}
