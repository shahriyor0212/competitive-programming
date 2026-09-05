#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> count_freq(string s){
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    return freq;
}
int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout); 
    int t; cin >> t;
    vector<pair<string, string>> v;
    for (int i = 0; i < t; i++){
        string s1, s2; cin >> s1 >> s2;
        v.push_back({s1, s2});
    }
    vector<int> count_letters(26, 0);
    for (auto p : v){
        vector<int> freq = count_freq(p.first);
        vector<int> freq2 = count_freq(p.second);
        for (int i = 0; i < 26; i++){
            count_letters[i] += max(freq[i], freq2[i]);
        }
    }

    for (int i = 0; i < 26; i++){
        cout << count_letters[i] << "\n";
    }
}