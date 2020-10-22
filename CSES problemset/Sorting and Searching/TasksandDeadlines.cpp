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
    ll n;
    const int mxn = 2e5;
    cin>>n;
    array<int,2> a[mxn];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i][0] >> a[i][1];
    }
    sort(a,a+n);
    
    ll t = 0,ans = 0;
    for (int i = 0; i < n; ++i)
    {
        t+=a[i][0];
        ans += a[i][1] - t;
    }
    cout << ans;
    
}
    




  
