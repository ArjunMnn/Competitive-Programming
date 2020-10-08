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
    const int mxn = 5e3;
    cin>>n>>x;
    array<int,2> a[mxn];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i][0];
        a[i][1] = i;
    }
    sort(a,a+n);
    for (int k = 0; k < n; ++k)
    {
        
    
    for (int i = k+1 ; i < n; ++i)
    {
        int l = i+1;
        int r = n-1;
        while(l<r){
            if(a[k][0]+a[i][0]+a[l][0]+a[r][0]==x){
                cout << a[k][1]+1<<" "<<a[i][1]+1 << " "<<a[l][1]+1<< " " <<a[r][1]+1;
                return 0;
            }
            if(a[k][0]+a[i][0]+a[l][0]+a[r][0]>x)
                r--;
            else
                l++;
        }

    }}
    cout << "IMPOSSIBLE";
}
    




  
