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


bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 



bool sortf(const vector<ll> &a, 
              const vector<ll> &b) 
{ 
    return a<b; 
} 

void solve(){
    int n;
    cin >> n;
    if(n == 1 || n == 2 || n == 4)
        cout << -1 << endl;

    else if(n%3==0)
        cout << n/3 << " " << 0 << " " << 0 << endl;
    else if(n%3==1)
        cout << (n-7)/3 << " " << 0 << " " << 1 << endl;
    else
        cout << (n-5)/3 << " " << 1 << " " << 0 << endl; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,x;
    
    bool f = 0;
    const int mxn = 2e5;
    cin>>t;
    while(t--)
        solve();
    
    
}
    




  