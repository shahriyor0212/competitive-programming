#include <iostream>
using namespace std;
int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int n, k; cin >> k >> n;
    int position[15][25];
    for (int i = 0; i <k; i++){
        for (int j=0; j<n; j++){
            int cow; cin >> cow; 
            position[i][cow] = j;
        }
    }
    
    int result = 0; 

    for (int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if (i == j) continue;

            bool better = false;
            for (int session = 0; session < k; session++){
                if (position[session][i] < position[session][j]){
                    better = true;
                }else {
                    better = false;
                    break;
                }
            }
            result += better;
        }
    }
    cout << result << "\n";
}