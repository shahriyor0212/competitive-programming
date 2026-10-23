#include <iostream>
#include <string>
#include <set>

using namespace std;

string compress(string s) {
    string res = "";
    for (char c : s) {
        if (res.empty() || res.back() != c) {
            res.push_back(c);
        }
    }
    return res;
}

void solve() {
    string s; cin >> s;
    set<string> unique_strings;
    unique_strings.insert(compress(s));
    int n = s.length();
    for (int i = 1; i < n - 1; i++) {
        string temp = s;
        temp[i] = (temp[i] == '0' ? '1' : '0');
        unique_strings.insert(compress(temp));
    }
    cout << unique_strings.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}