#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main(){
    int t; cin >> t;
    while(t--){
        int participants; cin >> participants;
        vector<int> problem(3);
        for (auto &i : problem) cin >> i; 
        int mx = 0; 
        for (int i = 0; i < 3; i++){
            int bots = participants - problem[i];
            mx = max(mx, bots);
        }
        cout << mx << "\n";
    }
    
}