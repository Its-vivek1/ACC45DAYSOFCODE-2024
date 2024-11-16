#include <bits/stdc++.h>
#include <string>

using namespace std;

string encodeMessage(int N, const string& S) {
    string swappedMessage = S;
    for (int i = 0; i < N - 1; i += 2) {
        swap(swappedMessage[i], swappedMessage[i + 1]);
    }

    string encodedMessage;
    for (char c : swappedMessage) {
        char newChar = char(219 - int(c)); 
        encodedMessage += newChar;
    }

    return encodedMessage;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 
        string S;
        cin >> S;

        cout << encodeMessage(N, S) << endl; 
    }

    return 0;
}
