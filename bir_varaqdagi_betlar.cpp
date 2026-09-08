#include <iostream>
#include <cmath>

using namespace std;
int main(){
    long long n, q; cin >> n >> q;
    for (long long i = 0; i < q; i++){
        long long a, b; cin >> a >> b;
        long long first, second, third, fourth;
        if (a > b){
            if (a % 2 == 0){
                first = a-1;
                second = a;
                third = n - a;
                fourth = n - a + 1;
            }else{
                first = a;
                second = a+1;
                third = n - a + 1;
                fourth = n - a;
            }
        }
        else{
            if (b % 2 == 0){
                first = b-1;
                second = b;
                third = n - b;
                fourth = n - b + 1;
            }else{
                first = b;
                second = b+1;
                third = n - b + 1;
                fourth = n - b;
            }
        }
        bool ok = false;
        if(a == first || a == second || a == third || a == fourth){
            if (b == first || b == second || b == third || b == fourth){
                ok = true;
            }
        }
        if (ok){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}