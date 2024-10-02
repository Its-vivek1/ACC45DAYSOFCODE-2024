#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;

        int empty_count = (1 - B1) + (1 - B2) + (1 - B3);

        if (empty_count >= 2) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }

    return 0;
}
