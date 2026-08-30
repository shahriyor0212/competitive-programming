#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int ans = 0;
        bool possible = true;

        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                ans++;
            } else if (n % 3 == 0) {
                n *= 2;
                ans++;
            } else {
                possible = false;
                break;
            }
        }

        cout << (possible ? ans : -1) << '\n';
    }

    return 0;
}