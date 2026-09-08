#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<int> lift1(n+1);
    vector<int> lift2(n+1);
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'U') {
            lift1[i+1] = lift1[i]+1;
        } else {
            lift1[i+1] = lift1[i]-1;
        }
    }
    lift2[0] = lift1[n];
    for (int i = 0; i < n; i++){
        if (s[n-i-1] == 'U' ){
            lift2[i+1] = lift2[i]-1;
        } else {
            lift2[i+1] = lift2[i]+1;
        }
        if (lift1[i] == lift2[i]){
            count++;
        }
    }
    cout << count << "\n";
}