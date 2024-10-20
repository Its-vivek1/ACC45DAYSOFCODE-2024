#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int calculate_event_time(int N, int A, int B) {
    int R = log2(N);
    int total_round_time = R * A;
    int total_break_time = (R - 1) * B;
    return total_round_time + total_break_time;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B; 
        int total_time = calculate_event_time(N, A, B);
        cout << total_time << endl; 
    }

    return 0;
}
