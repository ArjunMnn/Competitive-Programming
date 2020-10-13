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
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll i = n-2;
    while(k--){
        a[n-1]+=a[i];
        i--;
    }
    cout << a[n-1] << endl;
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
    




  
