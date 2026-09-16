#include <iostream>
#include <string>
using namespace std;

int main(){
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    string s; cin >> s;
    int cnt = 0; 
    for (int a = 0; a < s.size(); a++){
        for (int b=a+1; b < s.size(); b++){
            for (int c=b+1; c < s.size(); c++){
                for (int d=c+1; d < s.size(); d++){
                    cnt+=(s[a] == s[c] && s[b] == s[d]);
                }
            }
        }
    }

    cout << cnt; 

}