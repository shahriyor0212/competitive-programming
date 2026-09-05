#include <iostream>
#include <string>
#include <set>
#include <vector>


using namespace std;
void individual_cows(vector<string> grid){
    set<char> winners;
    for(int i = 0; i < 3; i++) {
        if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            winners.insert(grid[i][0]);
        }
    }
    for(int j = 0; j < 3; j++) {
        if(grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) {
            winners.insert(grid[0][j]);
        }
    }
    if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
        winners.insert(grid[0][0]);
    }
    if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]){
        winners.insert(grid[0][2]);
    }
    cout << winners.size() << "\n";
}
void check_team(char a, char b, char c, set<pair<char, char>>& winners) {
    set<char> unique_chars = {a, b, c};
    // A team wins if exactly 2 unique characters make up the line
    if (unique_chars.size() == 2) {
        auto it = unique_chars.begin();
        char first = *it;
        char second = *next(it);
        winners.insert({first, second});
    }
}
void teams_victory(vector<string> grid){
    set<pair<char, char>> winners;
    
    // Check rows
    for(int i = 0; i < 3; i++) {
        check_team(grid[i][0], grid[i][1], grid[i][2], winners);
    }
    // Check columns
    for(int j = 0; j < 3; j++) {
        check_team(grid[0][j], grid[1][j], grid[2][j], winners);
    }
    // Check diagonals
    check_team(grid[0][0], grid[1][1], grid[2][2], winners);
    check_team(grid[0][2], grid[1][1], grid[2][0], winners);
    
    cout << winners.size() << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    vector<string> grid(3);
    for(auto &a : grid) cin >> a;
    individual_cows(grid);
    teams_victory(grid);

}