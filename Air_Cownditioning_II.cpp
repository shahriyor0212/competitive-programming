#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool covered = false;
int best = 1e9;
vector<int> p_cost;
struct Cow{
    int s, t, c; 
};
struct Air_Conditioner{
    int a, b;
    long long p;
    int m;
};
void solve(vector<Cow>& cows, vector<Air_Conditioner>& air_conditioners){
    int m = air_conditioners.size();
    int n = cows.size();
    for (int mask = 0; mask < (1 << m); mask++){
        int current_cost = 0;
        vector<int> stalls(101, 0);

        for (int i = 0; i < m; i++){
            if ((mask >> i) & 1){
                current_cost += air_conditioners[i].m;
                for (int stall = air_conditioners[i].a; stall <= air_conditioners[i].b; stall++){
                    stalls[stall] += air_conditioners[i].p;
                }
            }
        }
        bool sat = true;
        for(int i = 0; i < n; i++ ){
            for(int stall = cows[i].s; stall <= cows[i].t; stall++){
                if (stalls[stall] < cows[i].c){
                    sat = false;
                    break;
                }
            }
            if(!sat){break;}
        }
        if(sat){
            p_cost.push_back(current_cost);
        }
    }
}

int main(){
    int N, M; cin >> N >> M;

    vector<Cow> cows(N);
    vector<Air_Conditioner> air_conditioners(M);
    
    
    for (int i = 0; i < N; i++){
        cin >> cows[i].s >> cows[i].t >> cows[i].c;
        
    }
    for (int i = 0; i < M; i++){
        cin >> air_conditioners[i].a >> air_conditioners[i].b >> air_conditioners[i].p >> air_conditioners[i].m;
    }
    solve(cows, air_conditioners);

    cout << *min_element(p_cost.begin(), p_cost.end()) << "\n";
}