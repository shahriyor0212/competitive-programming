#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main(){
    char direction; cin >> direction;
    string str; cin >> str;
    string first_row = "qwertyuiop[";
    string second_row = "asdfghjkl;";
     string third_row = "zxcvbnm,./";
    string new_str;
    for (int i = 0; i < str.size(); i++){
        if (direction == 'R'){
            if (first_row.find(str[i]) != string::npos){
                new_str.push_back(first_row[first_row.find(str[i])-1]);
            }else if (second_row.find(str[i]) != string::npos){
                new_str.push_back(second_row[second_row.find(str[i])-1]);
            }else{
                new_str.push_back(third_row[third_row.find(str[i])-1]);
            }
        }else{
            if (first_row.find(str[i]) != string::npos){
                new_str.push_back(first_row[first_row.find(str[i])+1]);
            }else if (second_row.find(str[i]) != string::npos){
                new_str.push_back(second_row[second_row.find(str[i])+1]);
            }else{
                new_str.push_back(third_row[third_row.find(str[i])+1]);
            }
        }
    }
    cout << new_str << "\n";
}