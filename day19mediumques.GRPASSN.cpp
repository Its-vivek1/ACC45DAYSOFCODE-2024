#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;

void canFormGroups(int T) {
    while (T--) {
        int N;
        cin >> N;  
        vector<int> P(N);
        unordered_map<int, int> count;

        for (int i = 0; i < N; i++) {
            cin >> P[i];
            count[P[i]]++;
        }

        bool possible = true;
        
        for (const auto& entry : count) {
            int size = entry.first;      
            int num_people = entry.second; 

            if (num_people % size != 0) { 
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl; 
    }
}

int main() {
    int T;
    cin >> T; 
    canFormGroups(T); 
    return 0;
}
