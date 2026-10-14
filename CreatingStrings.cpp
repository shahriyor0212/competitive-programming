#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long; 
string s; 
vector<string> perms;
int char_count[26];
void search(const string &current = ""){
    if (current.size() == s.size()){
        perms.push_back(current);
        return;
    }
    for (int i = 0;i < 26; i++){
        if (char_count[i] > 0){

            char_count[i]--;
            search(current + (char)('a' + i));
            char_count[i]++;
        }
    }
}
int main(){
    cin >> s; 
    for (char c : s){ char_count[c-'a']++; }
    search();
    cout << perms.size() << "\n";
    for (const string &permutation : perms){cout << permutation << "\n";}
    

}