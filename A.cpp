#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int count = 0; 
        int payment_of_john = 0;
        for (int start = 0; start < n; start += k) {
            bool has_zero = false;

    for (int i = start; i < start + k; i++) {
            if (s[i] == '0') {
                has_zero = true;
                break;
            }
    }

            if (!has_zero) {
                payment_of_john++;
            }

        }  
        cout << payment_of_john << "\n";
}
}
