#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (auto &i : v) cin >> i;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = v[i] + sum;
    }
    if (sum % 2 == 0){
        cout << 0 << "\n";
    }else{
        cout << 1 << "\n";
    }
}
