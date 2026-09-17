#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll k, n; cin >> n >> k;
        string str; cin >> str;
        set<char> s(str.begin(), str.end());
        ll odd = 0; 
        for (char c : s){
            ll frequency  = 0; 
            frequency += count(str.begin(), str.end(), c);
            if (frequency % 2 == 1){
                odd++;
            }
        }
        if (odd <= k+1){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}