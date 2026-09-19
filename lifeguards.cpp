#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n; cin >> n;
    vector<pair<int, int>> guards(n);
    for (int i = 0; i < n; i++){
        cin >> guards[i].first >> guards[i].second;
    } 
    vector<int> coverage(1001, 0);
    for (int i = 0; i < n; i++){
        for (int t = guards[i].first; t<guards[i].second; t++){
            coverage[t]++;
        }
    }
    int total = 0; 
    int min_unique_coverage = 1001;
    for (int i =0; i < 1001; i++){
        if (coverage[i] > 0){
            total++;
        }
    }
    for(int i = 0; i <n; i++){
        int unique_coverage = 0; 
        for (int t = guards[i].first; t<guards[i].second; t++){
            if (coverage[t] == 1){
                unique_coverage++;
            }
            
        }
        min_unique_coverage = min(min_unique_coverage, unique_coverage);
    }
    cout << total - min_unique_coverage << "\n";
}