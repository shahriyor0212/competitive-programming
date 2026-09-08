#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int count_a = 0, count_b = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'A'){
                count_a++;
            }else{
                count_b++;
            }
        }
        int mx = max(count_a, count_b);
        if (mx == count_a){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }
}   