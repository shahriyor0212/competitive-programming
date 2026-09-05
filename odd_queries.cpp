#include <iostream>
#include <vector>

using namespace std;

bool solve(int l, int r, int k, const vector<long long>& prefix) {
    long long originalSum = prefix.back();
    long long replacedSum = prefix[r] - prefix[l - 1];
    long long newSum = originalSum - replacedSum + 1LL * (r - l + 1) * k;
    return newSum % 2 != 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> prefix[i];
            prefix[i] += prefix[i - 1];
        }
        for (int i = 0; i < q; i++){
            int l, r, k; cin >> l >> r >> k;
            if (solve(l, r, k, prefix))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }    
    }
}