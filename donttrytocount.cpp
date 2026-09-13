#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        int cnt = 0; 
        for (int i = 0; i < 6; i++){
            if (x.find(s) != string::npos){
                cout << cnt << "\n";
                break;  
            }
            x = x+x;
            cnt++;
        }
        if (x.find(s) == string::npos){
            cout << -1 << "\n";
        }
    }
}