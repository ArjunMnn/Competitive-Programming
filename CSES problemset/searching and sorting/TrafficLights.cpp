#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define ll long long
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
    cout.tie(NULL);
    ll n,m;
    
   
    
    
    cin>>n>>m;
    set<ll> s;
    map<ll,ll> mp;
    s.insert(0);
    s.insert(n);
    mp[n] = 1;
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin >> x;
        auto it = s.lower_bound(x);
        auto r = *it;
        --it;
        auto l = *it;
        --mp[r-l];
        if (!mp[r-l]){
            mp.erase(r-l);
        }
        s.insert(x);
        ++mp[r - x];
        ++mp[x - l];
        cout << ((--mp.end())->first) << " " ;


        
    }
}
//0 3 8
    




  
