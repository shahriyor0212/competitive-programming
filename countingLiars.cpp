// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n; cin >> n;
//     vector<pair<int, char>> v(n);
//     for (int i = 0; i < n; i++){
//         cin >> v[i].second >> v[i].first;
//     }
//     sort(v.begin(), v.end());
    
//     vector<int> lying_left(n);
//     for (int i =1; i<n; i++){
//         lying_left[i] += lying_left[i-1];
//         if (v[i-1].second == 'L'){
//             lying_left[i]++;
//         }
//     }
//     vector<int> lying_right(n);
//     for (int i = n-2; i>=0; i--){
//         lying_right[i] += lying_right[i+1];
//         if (v[i+1].second == 'R'){
//             lying_right[i]++;
//         }
//     }
//     int minLiars = n;
//     for (int i = 0; i < n; i++){
//         minLiars = min(minLiars, lying_left[i] + lying_right[i]);
//     }
//     cout << minLiars << endl;
// }