#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    int T;  
    cin >> T;
    
    while (T--) {
        int N;  
        cin >> N;
        
        vector<int> songs(N);  
        for (int i = 0; i < N; ++i) {
            cin >> songs[i];
        }
        
        int K;  
        cin >> K;
        
        int uncleJohnySong = songs[K - 1];
        
        vector<int> sortedSongs = songs;
        sort(sortedSongs.begin(), sortedSongs.end());
        
        for (int i = 0; i < N; ++i) {
            if (sortedSongs[i] == uncleJohnySong) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    
    return 0;
}
