#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

ll best = 1e18;
void banana(ll i, ll a, ll b, ll n, vector<ll> &weights){
    if (i == n) {
        best = min(best, abs(a-b));
        return;
    }
    banana(i+1, a+weights[i], b, n, weights);
    banana(i+1, a, b+weights[i], n, weights);

}

int main(){
    int n; cin >> n;
    vector<ll> weights(n);
    for (auto &i : weights) cin >> i; 
    banana(0, 0, 0, n, weights);
    cout << best << "\n";
}