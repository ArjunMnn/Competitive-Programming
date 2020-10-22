#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define ll long long
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include <cmath>
#include <queue> 
#include<limits>
#include <utility> 
using namespace std;
const ll mod = 1e9 + 7;
int x[5];

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

bool place(int k,int i){
	for (int j = 1; j < k; j++)
	{
		if(x[j]==i || abs(x[j]-i)==abs(j-k))
			return false;

	}
	return true;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll a,b;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; ++i)
    {
    	ll x;
    	cin >> x;
    	v.push_back(x) ;
    }
    ll curr = v[0];
    ll sofar = v[0];
    for (ll i = 1; i < n; ++i)
    {
    	curr = max(v[i],curr+v[i]);
    	sofar = max(sofar,curr);
    }
    cout << sofar << endl;
    



}
  
        
