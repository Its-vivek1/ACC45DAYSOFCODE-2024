#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  
        
        vector<int> frequency(101, 0);  

        for (int i = 0; i < N; i++) {
            int animalType;
            cin >> animalType;
            frequency[animalType]++;
        }

        bool possible = true;
        for (int i = 1; i <= 100; i++) {
            if (frequency[i] % 2 != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
