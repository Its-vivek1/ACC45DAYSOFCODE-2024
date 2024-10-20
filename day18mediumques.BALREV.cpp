#include <bits/stdc++.h>
#include <string>
using namespace std;

void smallestBinaryString(int T) {
    while (T--) {
        int N;
        string A;
        cin >> N >> A;

        int count_0 = 0, count_1 = 0;
        for (char c : A) {
            if (c == '0') {
                count_0++;
            } else {
                count_1++;
            }
        }

        string smallest_string(count_0, '0');
        smallest_string += string(count_1, '1');

        cout << smallest_string << endl;
    }
}

int main() {
    int T;
    cin >> T;
    smallestBinaryString(T);
    return 0;
}
