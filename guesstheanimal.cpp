#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n; cin >> n;
    vector<vector<string>> animals(n);
    for (int i = 0; i < n; i++){
        int numberofYes = 0;
        string name; int k = 0; cin >> name >> k;
        vector<string> characteristics(k);
        for (int j = 0; j < k; j++){
            cin >> characteristics[j];
        }
        animals[i] =  characteristics;
    }
    int answer = 0;
    for (int i=0;i<n;i++){
        for (int j = i; j <n; j++){
            if (i == j) continue;   
            int common = 0;
            for (string &feature : animals[i]){
                if (find(animals[j].begin(), animals[j].end(), feature) != animals[j].end()){
                    common++;
                }
            }
                answer = max(common, answer);
            }
    }
    cout << answer+1;

}