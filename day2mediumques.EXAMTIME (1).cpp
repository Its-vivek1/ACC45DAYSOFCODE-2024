#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here

    int T;
    cin >> T;  
    vector<string> results;  

    for (int i = 0; i < T; ++i) {
        int dsaDragon, tocDragon, dmDragon;
        int dsaSloth, tocSloth, dmSloth;

        
        cin >> dsaDragon >> tocDragon >> dmDragon;
        
        cin >> dsaSloth >> tocSloth >> dmSloth;

        int totalDragon = dsaDragon + tocDragon + dmDragon;
        int totalSloth = dsaSloth + tocSloth + dmSloth;

        if (totalDragon > totalSloth) {
            results.push_back("Dragon");
        } else if (totalSloth > totalDragon) {
            results.push_back("Sloth");
        } else {
            if (dsaDragon > dsaSloth) {
                results.push_back("Dragon");
            } else if (dsaSloth > dsaDragon) {
                results.push_back("Sloth");
            } else {
                if (tocDragon > tocSloth) {
                    results.push_back("Dragon");
                } else if (tocSloth > tocDragon) {
                    results.push_back("Sloth");
                } else {
                    results.push_back("Tie");
                }
            }
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}


