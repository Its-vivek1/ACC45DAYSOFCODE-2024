#include <bits/stdc++.h>
using namespace std;

bool canMeasureWeight(int W, int X, int Y, int Z) {
    if (X == W || Y == W || Z == W) {
        return true; 
    }
    if (X + Y == W || X + Z == W || Y + Z == W) {
        return true; 
    }
    if (X + Y + Z == W) {
        return true; 
    }
    return false;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z; 
        if (canMeasureWeight(W, X, Y, Z)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}
