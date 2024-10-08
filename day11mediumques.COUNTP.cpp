#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        vector<int> A(N);
        int totalSum = 0;
        bool hasOdd = false;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            totalSum += A[i];
            if (A[i] % 2 != 0) { 
                hasOdd = true;
            }
        }

        if (totalSum % 2 == 0 && hasOdd) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n";  
        }
    }

    return 0;
}