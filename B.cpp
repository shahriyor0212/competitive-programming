#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
void find_number_of_individual_cows(vector<string> grid){
    set<char> cows;
    for (int i = 0; i < 3; i++){
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]){
            cows.insert(grid[i][0]);
        }
    }
    for (int j = 0; j < 3; j++){
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]){
            cows.insert(grid[0][j]);
        }
    }
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
        cows.insert(grid[0][0]);
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]){
        cows.insert(grid[0][2]);
    }
    cout  << cows.size() << "\n";
}
bool check_if_winners(char ch1, char ch2, char x, char y, char z){
    if (x == y && y != z){
        if(ch1 == x && ch2 == z || ch2 == x && ch1 == z) return true; 
    }else if(x == z && z != y){
        if(ch1 == x && ch2 == y || ch2 == x && ch1 == y) return true;
    }else if(z == y && x != y){
        if(ch1 == z && ch2 == x || ch2 == z && ch1 == x) return true;
    }
    return false;
}
bool check_double_wins(char ch1, char ch2, vector<string> grid){
    for (int i = 0; i < 3; i++){
        if (check_if_winners(ch1, ch2, grid[i][0], grid[i][1], grid[i][2])){
            return true;
        }
        if (check_if_winners(ch1, ch2, grid[0][i], grid[1][i], grid[2][i])){
            return true; 
        }

    }
    if (check_if_winners(ch1, ch2, grid[0][0], grid[1][1], grid[2][2])){
        return true;
    }
    if (check_if_winners(ch1, ch2, grid[0][2], grid[1][1], grid[2][0])){
        return true;
    }
    return false;
}
void number_of_teams(vector<string> grid){
    int double_cow_wins = 0;
    for (char ch1 = 'A';ch1 <='Z'; ch1++){
        for (char ch2 = ch1+1; ch2 <= 'Z'; ch2++){
            double_cow_wins += check_double_wins(ch1, ch2, grid);
        }
    }
    cout << double_cow_wins << "\n";
}

int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    vector<string> grid(3);
    for(auto &a : grid) cin >> a;
    find_number_of_individual_cows(grid);
    number_of_teams(grid);
}