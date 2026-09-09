#include <iostream>

using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m; cin >> x >> y >> m;
    int maximum = 0;
    for (int i = 0; i <= m/x; i++){
        for (int j = 0; j <= m/y; j++){
            int current_total = i*x + j*y;
            if (current_total <= m){
                maximum = max(maximum, current_total);
            }
        }
    }
    cout << maximum << endl;
}