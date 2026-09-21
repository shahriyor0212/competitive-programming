#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;cin >> n;
        long long b = n % 2020;

        if (b <= n / 2020){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}