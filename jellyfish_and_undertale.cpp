#include <iostream>
#include <algorithm>

using namespace std;
void solve(){
    long long mx_value, bomb_timer, n; cin >> mx_value >> bomb_timer >> n;
    long long sum = bomb_timer;
    for (int i = 0; i < n; i++){
        long long tool; cin >> tool;
        sum += min(mx_value - 1, tool); 
    }
    
    cout << sum << "\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}