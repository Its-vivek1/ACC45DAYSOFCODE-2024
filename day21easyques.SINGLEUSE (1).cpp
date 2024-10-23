#include <bits/stdc++.h>
#include <cmath> 

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        int attacks_normal = ceil(static_cast<double>(H) / X);

        int remaining_health = H - Y;
        int attacks_after_special;
        
        if (remaining_health > 0) {
            attacks_after_special = ceil(static_cast<double>(remaining_health) / X);
        } else {
            attacks_after_special = 0; 
        }

        int total_attacks_special = 1 + attacks_after_special;

        int min_attacks = min(attacks_normal, total_attacks_special);

        cout << min_attacks << endl;
    }

    return 0;
}
