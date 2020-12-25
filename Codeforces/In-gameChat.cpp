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

void solve(){
    int n,b = 0,c = 0;
    cin >> n;
    string s;
    cin >> s;
    int i;
    for(i = s.size()-1; i>=0; i--){
        if(s[i]==')')
            b++;
        else
            break;
    }
    // cout << b << endl;
    if(b>i+1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
}


int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    
}

