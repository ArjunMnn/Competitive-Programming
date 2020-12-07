#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define ll long long
#define lld long double
#include<unordered_map>
#include<map>
#include<algorithm>
#include <cstring>
#include <cmath>
#include <queue> 
#include<limits>
#include <utility> 
using namespace std;
const ll mod = 1e9 + 7;
const int mxn = 2e5;

int solve(){
    int n,k;
    cin >> n >> k;
    int x[n],y[n];
    for(int i = 0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int res = -1;
    for(int i = 0;i<n;i++){
        bool f = 1;
        for(int j = 0;j<n;j++){
            int ans = (abs(x[i] - x[j]) +
                        abs(y[i] - y[j])) ;
            if(ans>k){
                f = 0;
                break;

            } 
            
        }
        if(f){
            res = 1;
            break;
        }
    }
    return res;

    
    
}


int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
    
}

