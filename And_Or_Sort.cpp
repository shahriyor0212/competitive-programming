#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long 

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll zeros_right = count(s.begin(), s.end(), '0');
        if(s[0] == '1'){
            cout << zeros_right << "\n";
            continue;
        }else{
            ll ones_left = 0;
            ll answer = 1e9;
            for (int i = 0; i < n; i++){
                if (s[i] == '0'){
                    zeros_right--;
                }
                if(s[i] == '1'){
                    ones_left++;
                }
                answer = min(answer, ones_left+zeros_right);
            }
            cout << answer << "\n";
        }
        
    }
}    