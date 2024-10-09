#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N; 
        cin >> N;
        
        string gestures;
        cin >> gestures;
        
        if (gestures.find('I') != string::npos) {
            cout << "INDIAN" << endl;
        } else if (gestures.find('Y') != string::npos) {
            cout << "NOT INDIAN" << endl;
        } else {
            cout << "NOT SURE" << endl;
        }
    }
    
    return 0;
}
