#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n, m; cin >> n >> m;
    vector<int> tvs(n);
    for (auto &a : tvs) cin >> a;
    vector<int> tvs_carrying;
    int total_earned = 0; 
    for (int i = 0; i < n; i++){
        if (tvs[i] < 0){
            tvs_carrying.push_back(tvs[i]);
        }
    }
    while(true){
        sort(tvs_carrying.begin(), tvs_carrying.end());
        for (int i = 0; i < min(m, static_cast<int>(tvs_carrying.size())); ++i){
            total_earned -= tvs_carrying[i];
        }
        break;
    }
    cout << total_earned << '\n';
}