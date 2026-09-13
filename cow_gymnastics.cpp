#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k, n; cin >> k >> n;
    vector<vector<int>> position(k, vector<int>(n));
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++){
            int x; cin >> x
            position[i][j] = x;
        }
    }
    int consistent_pairs = 0;
    for(int i = 1; i <= k; i++){
        for (int j = 1; j <= k; j++){
            if (i == j){
                continue; 
            }
            bool consistent = true;
            for (int session = 0; session < k; session++){
                if (position[session][i] < position[session][j]){
                    consistent = false; 
                    break;
                }
            }
            if (consistent){
                consistent_pairs++;A
            }
        }

    }

}