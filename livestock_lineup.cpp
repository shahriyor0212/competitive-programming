#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
struct Condition{
    string s1;
    string s2;
};

void solve(vector<Condition> &conditions){
    sort(cows.begin(), cows.end());
    auto n_conditions = conditions.size();
    do{
        bool good = true;
        for (int condition = 0; condition < n_conditions; condition++ ){
            auto cow1 = find(cows.begin(), cows.end(), conditions[condition].s1);
            auto cow2 = find(cows.begin(), cows.end(), conditions[condition].s2);
            int cow_1 = distance(cows.begin(), cow1);
            int cow_2 = distance(cows.begin(), cow2);
            if (abs(cow_1 - cow_2) != 1){
                good = false;
            }
        }
        if (good){
        for (string &s : cows){
            cout << s << "\n";
        }
        break;
    }
        
    }while(next_permutation(cows.begin(), cows.end()));
}
int main(){
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    int n; cin >> n;
    vector<Condition> conditions(n);
    for (int i = 0; i < n; i++){
        string s1, a, b, c, d, s2; cin >> s1 >> a >> b >> c >> d >> s2;
        conditions[i].s1 = s1;
        conditions[i].s2 = s2;
    }
    solve(conditions);
}