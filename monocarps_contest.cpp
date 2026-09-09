#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        vector<ll> v(n);
        ll cnt = 0;
        for(auto &a : v) cin >> a;
        int count_zeros = count(v.begin(), v.end(), 0);
        if (v[0] != 0){
            cnt++;
        }if (v[n-1] != 0)
        {   
            cnt++;  
        }if(count_zeros < 2){
            cout << -1 << "\n";
            continue;
        }
        cout << cnt << "\n";
    }

    
}