#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    ll a, b, c; cin >> a >> b >> c;
    ll sum = a + b + c;
    cout << ((sum % 2 == 0) ? sum / 2 : (sum + 1) / 2) << "\n";
}