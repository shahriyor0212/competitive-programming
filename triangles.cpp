#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n; cin >> n; 
    vector<pair<int, int>> points(n);
    for (int j=0;j<n; j++){
        cin >> points[j].first >> points[j].second ;
    }
    int max_area = 0;
    for (int i=0; i<n; i++){
        int x = points[i].first;
        int y = points[i].second;
        int max_distance_x = 0;
        int max_distance_y = 0; 
        for (int t = 0; t < n;t++){
            if (t == i) continue;
            if(points[t].second == y){
                int distance_x = abs(x - points[t].first);
                max_distance_x = max(max_distance_x, distance_x);
            }
        }   
        for (int j = 0; j < n;j++){
            if (j == i) continue;
            if (points[j].first == x){
                int distance_y = abs(y - points[j].second);
                max_distance_y = max(max_distance_y, distance_y);
            }
        } 
        int current_area = max_distance_x*max_distance_y;
        max_area = max(max_area, current_area);
    }
    cout << max_area;
}