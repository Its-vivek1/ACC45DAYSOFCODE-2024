#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        int count_start38 = 0;
        int count_ltime108 = 0;

        for (int i = 0; i < N; ++i) {
            string code;
            cin >> code; 

            if (code == "START38") {
                count_start38++;
            } else if (code == "LTIME108") {
                count_ltime108++;
            }
        }

        cout << count_start38 << " " << count_ltime108 << endl;
    }

    return 0;
}
