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
    cin>>n;
    // int a[mxn],n1[mxn];
    vector<ll> a(mxn),n1(mxn);
    vector<ll> stack;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        ll s = stack.size();
        if(!stack.empty() && a[stack[s-1]]<a[i]){
            stack.push_back(i);
        }
        else if(stack.empty()){
            stack.push_back(i);
        }
        else{
            s = stack.size();
            while(!stack.empty() && a[stack[s-1]]>a[i]){
                n1[stack[s-1]] = i+1;
                stack.pop_back();
                s--;
            }
            stack.push_back(i);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << n1[i] << " ";
    }
        
}
    




  
