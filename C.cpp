#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s = to_string(n);
        int number = s[0] - '0';
        int count = 0;
        for(int i = 1; i < number; i++){
            count+=10;
        }
        for (int i = 1; i <= s.size(); i++){
            count+=i;
        }
        cout << count << "\n";
    }
}