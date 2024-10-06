#include <iostream>
using namespace std;

int main() {
    int t,x,y,ans;
    cin >> t; // Read the number of test cases

    while (t--) {
        cin >> x>> y; // Read the costs of renting and purchasing

       if(y%x==0){
           ans=(y/x)-1;
           
       }else{
           ans=y/x;
       }
       cout<<ans<<endl;
    }
    return 0;
}