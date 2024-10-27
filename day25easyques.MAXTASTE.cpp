#include <bits/stdc++.h>
#include <algorithm> 

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max_tastiness = max({a + c, a + d, b + c, b + d});

        cout << max_tastiness << endl;
    }

    return 0;
}
