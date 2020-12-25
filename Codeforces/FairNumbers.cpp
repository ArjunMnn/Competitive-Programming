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

string getString(char x) 
{ 
    string s(1, x); 
  
    return s;    
} 


bool fair(ll n){
    string s = to_string(n);

    for(auto i:s){
        if(i == '0')
            continue;
        string in = getString(i);
        if(n%stoi(in)==0){
            continue;
        }
        else
            return false;
    }
    return true;
}



void solve(){
    ll n;
    cin >> n;
    while(1){
        if(fair(n))
            break;
        n++;
    }
    cout << n << endl;

    
}


int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
    
}

