#include <bits/stdc++.h>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S; 
        cin >> S;

        unordered_map<char, int> frequency; 

        for (char c : S) {
            frequency[c]++;
        }

        bool canFormPalindrome = false;
        for (const auto& pair : frequency) {
            if (pair.second >= 2) {
                canFormPalindrome = true;
                break;
            }
        }

        if (canFormPalindrome) {
            cout << N - 2 << endl;
        } else {
            cout << -1 << endl; 
        }
    }

    return 0;
}
