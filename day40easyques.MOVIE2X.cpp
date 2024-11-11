#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int time_first_part = Y / 2;

    int time_second_part = X - Y;

    int total_time = time_first_part + time_second_part;

    cout << total_time << endl;

    return 0;
}
