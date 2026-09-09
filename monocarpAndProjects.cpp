#include <iostream>
#include <algorithm>
#define ll long long 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin >> t;
    while(t--){
        ll x, y, k; cin >> x >> y >> k;
        ll cnt = 0; 
        ll difference = y-x;
        ll months = min(k, max(0LL, (y-x) - x + 1));
        for(ll i = 0; i < months; i++){
            cnt+=y % x;
            x++; y++;
        }
        cnt += difference*(k-months);
        cout << cnt << "\n";
    }
}