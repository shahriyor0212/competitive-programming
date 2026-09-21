#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<pair<long long, char>> position(n);
    for (int i = 0; i <n; i++){
        cin >> position[i].second >> position[i].first;
    }
    sort(position.begin(), position.end());
    int min_liars = 1001;
    for (int i = 0; i < n; i++){
        int leftLiars = 0;
        for (int j = 0; j < i; j++){
            if (position[j].second == 'L'){
                leftLiars++;
            }
        }
        int rightLiars = 0; 
        for (int j = i+1; j < n; j++){
            if (position[j].second == 'G'){
                rightLiars++;
            }
        }
        min_liars = min(min_liars, rightLiars+leftLiars);
    }
    cout << min_liars << "\n";

}