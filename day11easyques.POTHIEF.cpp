#include <bits/stdc++.h>
#include <cmath> 

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y; 

        int distance = abs(X - Y);

        cout << distance << endl;
    }

    return 0;
}
