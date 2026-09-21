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
        for(int j = i+1; j < m; j++){
            for (int k = j+1; k < m; k++){
                set<string> spotted;
                set<string> plain;
                for (int plain_cow = n; plain_cow < n*2; plain_cow++){
                    string pattern;
                    pattern += grid[plain_cow][i];
                    pattern += grid[plain_cow][j];
                    pattern += grid[plain_cow][k];
                    spotted.insert(pattern);
                }
                bool works = true;
                for (int spotted_cow = 0; spotted_cow < n; spotted_cow++){
                    string pattern;
                    pattern += grid[spotted_cow][i];
                    pattern += grid[spotted_cow][j];
                    pattern += grid[spotted_cow][k];
                    if (spotted.count(pattern)){
                        works = false;
                        break;
                    }
                }
                if (works){
                    answer++;   
                }
            }
        }
    }
    cout << answer << '\n';
}