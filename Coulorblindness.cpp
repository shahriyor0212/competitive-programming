#include <iostream>
#include <string>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1;cin >> s1;
        string s2; cin >> s2;
        int count = 0;
        for (int i = 0; i < n; i++){
            if (s1[i] == s2[i]){
                count++;
            }else if (s1[i] == 'G' && s2[i] == 'B'){
                count++;
            }else if (s1[i] == 'B' && s2[i] == 'G'){
                count++;
            }else{
                count = count;
            }
        }
        if (count == n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
}