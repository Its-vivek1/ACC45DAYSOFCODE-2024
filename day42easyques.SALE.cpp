#include <bits/stdc++.h>
#include <algorithm>  
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;  
        int total_cost = A + B + C - min({A, B, C});
        cout << total_cost << endl;  
    }
    return 0;
}
