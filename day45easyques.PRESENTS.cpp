#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        int full_groups = N / 5;
        int remaining_gifts = N % 5;
        
        int total_cost = full_groups * 4 + remaining_gifts;
        
        cout << total_cost << endl;
    }

    return 0;
}
