#include <iostream>
#include <vector>
#include <set>
#define ll long long
using namespace std;
int main(){
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    ll n, m; cin >> n >> m;
    vector<vector<char>> grid(n*2, vector<char>(m));
    for (int i = 0; i < n*2; i++){
        for (int j =0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    int answer = 0; 
    for (int i = 0; i < m; i++){
        set<char> spotted;
        set<char> plain;
        for (int plain_cow = n; plain_cow < n*2; plain_cow++){
            plain.insert(grid[plain_cow][i]);
        }
        for (int spotted_cow = 0; spotted_cow < n; spotted_cow++){
            spotted.insert(grid[spotted_cow][i]);
        }
        bool dont_overlap = true;
        for (auto cow : spotted){
            if (plain.count(cow)){
                dont_overlap = false;
                break;
            }
        }
        answer += dont_overlap;
    }
    cout << answer << '\n';
}