#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define ll long long
void solve(int n, string s){
    vector<bool> seen(26, false);
    seen[s[0] - 'A'] = true;
    for (int i=1; i < n; i++){
        if(s[i] != s[i-1]){
            if (seen[s[i] - 'A']){  
                cout << "NO\n";
                return;
            }        
            seen[s[i] - 'A'] = true;
        }
    }
    cout << "YES\n";
    
}
int main(){
    ll t = 0; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        solve(n, s);
    }
}