#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int A, B; 
        cin >> A >> B;

        int limak_total = 0; 
        int bob_total = 0;    
        int turn = 1;         

        while (true) {
            if (turn % 2 == 1) { 
                if (limak_total + turn > A) {
                    cout << "Bob" << endl;
                    break;
                }
                limak_total += turn;
            } else { 
                if (bob_total + turn > B) {
                    cout << "Limak" << endl; 
                    break;
                }
                bob_total += turn;
            }

            turn++; 
        }
    }

    return 0;
}
