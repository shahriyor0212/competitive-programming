#include <iostream>
#include <string>

using namespace std;
int removeTensDigit(int n){
    string s = to_string(n);
    
    if (s.length() >= 2){
        s.erase(s.length()-2, 1);
    }
    return stoi(s);
}
int main(){
    int n; cin >> n;
    int maximum_state_bankAccount;
    int the_digit_before_last_digit_deleted = removeTensDigit(n);
    int last_digit_deleted = n/10;
    if (n > 0){
        maximum_state_bankAccount = n;
    }
    if (n < 0){
        if (the_digit_before_last_digit_deleted > last_digit_deleted){
            maximum_state_bankAccount = the_digit_before_last_digit_deleted;
        }
        else{
            maximum_state_bankAccount = last_digit_deleted;
        }
    }
    
    cout << maximum_state_bankAccount << endl;
        
}