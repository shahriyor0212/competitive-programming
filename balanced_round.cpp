#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        vector<int> problems(n);
        for (auto &i : problems) cin >> i;
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        sort(problems.begin(), problems.end());
        int good_segment = 1;
        int longest_good = 0;
        for (int i = 0; i < n-1; i++){
            if (abs(problems[i] - problems[i+1]) <= k){
                good_segment++;
            }else{
                good_segment = 1;
            }
            longest_good = max(longest_good, good_segment);
        }
        cout << n - longest_good << '\n';
    }
}