#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        vector<int> current;
        int x = v[i];
        for (int j = 0; j < n; j++) {
            if (x <= v[j] && v[j] <= x + k) {
                current.push_back(v[j]);
            }
        }
        maximum = max(maximum, static_cast<int>(current.size()));

    }
    cout << maximum << endl;
    return 0;
}