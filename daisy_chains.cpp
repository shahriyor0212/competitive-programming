#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> p(n);
    for (auto &a : p) cin >> a;
    int count = 0;
    for (int i = 0; i < n; i++){
        vector<bool> seen(1001, false);
        long long sum = 0; 
        for (int j = i; j<n;j++){
            int len = j-i+1;
            sum+=p[j];
            seen[p[j]] = true;
            if (sum % len == 0 && seen[sum / len]){
                count++;
            }
        }
    }
    cout << count << "\n";
}