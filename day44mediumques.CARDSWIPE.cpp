#include <bits/stdc++.h>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        
        unordered_set<int> people_in_office;
        int max_people = 0;  
        
        for (int i = 0; i < N; ++i) {
            int id;
            cin >> id;  
            
            if (people_in_office.count(id)) {
                people_in_office.erase(id);
            } else {
                people_in_office.insert(id);
            }
            
            max_people = max(max_people, (int)people_in_office.size());
        }
        
        cout << max_people << endl;
    }

    return 0;
}
