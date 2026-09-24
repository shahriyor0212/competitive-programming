#include <iostream>
using namespace std;
#define ll long long
void solve(){
    ll a, b, c; cin >> a >> b >> c;
    ll ans = max(abs(a-b), abs((a+c) - b)); 
    cout << ans << '\n';
}
int main(){
    ll t; cin >> t; 
    while(t--){
        solve();
    }
}