#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int n; cin >> n;
    vector<int> r(n);
    for (auto &i : r) cin >> i;
    int min_dist = 1e9;
    for (int i = 0; i < n; ++i){
        int dist = 0;
        for (int j = 1; j < n; ++j){
            dist += r[j] * j;
        }
        min_dist = min(min_dist, dist);
        rotate(r.begin(), r.begin() + 1, r.end());
    }
    cout << min_dist << "\n";
}