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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;
    
    bool f = 0;
    const int mxn = 2e5;
    cin>>n>>x;
    int a[mxn];
    ll s = 0;
    map<ll,ll> mp;
    ll ans = 0;
    mp[0]++;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s+=a[i];
        ans+=mp[s-x];
        mp[s]++;
    }
    cout << ans;
    
}
    




  
