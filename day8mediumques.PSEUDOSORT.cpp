#include <bits/stdc++.h>
#include <vector>

using namespace std;

string isPseudoSorted(vector<int>& arr) {
    int n = arr.size();
    int inversion_count = 0;
    int inversion_index = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            inversion_count++;
            inversion_index = i;
            if (inversion_count > 1) {
                return "NO";  
            }
        }
    }

    if (inversion_count == 0) {
        return "YES";  
    }

    int i = inversion_index;
    
    swap(arr[i], arr[i + 1]);

    for (int j = 0; j < n - 1; ++j) {
        if (arr[j] > arr[j + 1]) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << isPseudoSorted(A) << endl;
    }

    return 0;
}
