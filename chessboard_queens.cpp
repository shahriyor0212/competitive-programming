#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    const int SIZE = 8;
    vector<vector<bool>> blocked_squares(SIZE, vector<bool>(SIZE));
    for(int r = 0; r < SIZE; r++){
        string row;
        cin >> row; 
        for (int c = 0; c < SIZE; c++){ blocked_squares[r][c] = row[c] == '*'; }
    }
    vector<int> queens(SIZE);
    iota(queens.begin(), queens.end(), 0);
    int valid_permutations = 0;

    do
    {
        bool works = true;
        for(int c = 0; c < SIZE; c++){
            if (blocked_squares[queens[c]][c]){
                works = false;
                break;
            }
        }
        vector<bool> taken(SIZE*2 - 1);
        for (int c = 0;c < SIZE; c++){
            int total = c + queens[c];
            if (taken[total]){
                works = false; 
                break;
            }
            taken[total] = true;
        }
        taken = vector<bool>(SIZE*2 -1 );
        for (int c = 0; c < SIZE; c++){
            int total = queens[c] - c + SIZE;
            if (taken[total]){
                works = false;
                break;
            }
            taken[total] = true;
        }
        if (works){valid_permutations++; }
    } while (next_permutation(queens.begin(), queens.end()));

    cout << valid_permutations << "\n";
    
}