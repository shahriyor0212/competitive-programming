#include <iostream>
using namespace std;
void solve(long long n){
    long long sum = 0;
    for (int k = 2; k < 30; k++){
        sum += (1LL << (k-1));
        if (n % sum == 0){
            cout << n/sum << "\n";
            return;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        solve(n);
    }
}