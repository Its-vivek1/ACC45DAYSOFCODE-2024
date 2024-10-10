#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long X, Y;
        cin >> X >> Y; 

        if (2 * Y >= X) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
