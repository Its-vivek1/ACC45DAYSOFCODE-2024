#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, X;
        cin >> N >> X; 

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }

        int current_people = X;
        int max_people = X; 

        for (int i = 0; i < N; ++i) {
            current_people += A[i]; 
            max_people = max(max_people, current_people);  
        }

        cout << max_people << endl; 
    }

    return 0;
}
