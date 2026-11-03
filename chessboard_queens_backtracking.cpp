#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 8;
vector<vector<bool>> blocked(SIZE, vector<bool>(SIZE));
vector<bool> rows(SIZE);
vector<bool> diag1(SIZE*2 - 1);
vector<bool> diag2(SIZE*2 - 1);

int cnt = 0;

void search_queens(int c = 0){
    if (c == SIZE){
        cnt++;
        return;
    }
    for(int r = 0; r < SIZE; r++){
        bool row_open = !rows[r];
        bool diag_open  = !diag1[r+c] && !diag2[r-c + SIZE-1];
        if(!blocked[r][c] && row_open && diag_open){
            rows[r] = diag1[r+c] = diag2[r-c+SIZE-1] = 1;
            search_queens(c+1);
            rows[r] = diag1[r+c] = diag2[r-c+SIZE-1] = 0;
        }
    }
}
int main(){
    for (int r=0; r<SIZE; r++){
        string row;
        cin >> row; 
        for (int i = 0; i < SIZE; i++){
            if(row[i] == '*'){
                blocked[r][i] = 1;
            }
        }
    }   
    search_queens();

    cout << cnt << "\n";

}