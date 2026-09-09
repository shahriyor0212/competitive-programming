#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--)
    {
        int x, y; cin >> x >> y;
        int maximum = 0;
        vector<int> operations;
        for (int i = 0; x > 0; i++){
            int current = x ^ y;    
            maximum = max(maximum, current);
            operations.push_back(current);
            x--; y++;   
        }
        auto it = find(operations.begin(), operations.end(), maximum);
        cout << maximum << " " << distance(operations.begin(), it) << "\n";
    }
    
}