#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int &t : x) cin >> t;
    for(int &t : y) cin >> t;
    int max_distance = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int current = (dx*dx) + (dy*dy);
            max_distance = max(current, max_distance);
        }
    }
    cout << max_distance << "\n";
}
