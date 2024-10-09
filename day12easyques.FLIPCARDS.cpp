#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

int main() {
    int T;
    std::cin >> T; 
    std::vector<int> results;

    for (int i = 0; i < T; ++i) {
        int N, X;
        std::cin >> N >> X; 
        int min_flips = std::min(X, N - X);
        results.push_back(min_flips); 
    }

    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
