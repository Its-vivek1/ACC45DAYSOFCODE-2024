#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N, X;
        cin >> N >> X;

        // Check if N and X have the same parity and if X is less than N
        if ((N % 2 == X % 2) && (X < N)) {
            cout << "YES" << endl;
        } else if (N % 2 == 0 && X < N && X % 2 != 0) { // Special case when N is even and X is odd
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
