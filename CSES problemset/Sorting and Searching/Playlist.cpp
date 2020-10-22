#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define ll unsigned long long
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll a,b;
    cin >> n;
    vector<ll> v;
    map<ll,ll> d;
    for (ll i = 0; i < n; ++i)
    {
    	ll x;
    	cin >> x;
    	v.push_back(x) ;
    }
    ll i = 0;
    ll res = 0;
    for (ll j = 0; j < n; ++j)
    {
    	if (d.find(v[j])!=d.end()){
    		i = max(i,d[v[j]]+1);
    		res = max(res,j - i + 1);
    		d[v[j]] = j;
    	}
    	else{
    		d[v[j]] = -1;
    	}
    	res = max(res,j - i + 1);
    	d[v[j]] = j;
    }
    cout << res << endl;
    



}
  
        
