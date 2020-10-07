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
    ll n,t;
    
    cin>>n>>t;
    int arr[n+1];
    ll l = 1;
    ll r = 1e18;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    while(l<r){
        ll m = (l+r)/2;
        ll s = 0;
        for (int i = 0; i < n; ++i)
        {
            s+=min(m/arr[i],(ll)1e9);
        }
            
        if (s>=t)
            r = m;
        else
            l = m+1;
    }
    cout << l;
    
}
    




  
