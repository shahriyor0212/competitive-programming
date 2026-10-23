#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if (b >= a){
            cout << -1 << "\n";
            continue;
        }else{
            cout << min(b, a-b) << "\n"; 
        }
    }
}