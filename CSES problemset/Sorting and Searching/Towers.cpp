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
    ll n;
    ll a,b;
   
    
    
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        auto it=upper_bound(arr.begin(),arr.end(),x);
        if(it==arr.end())
        {
            arr.push_back(x);
        }
        else
        {
            *it=x;
        }
        }
        cout<<arr.size()<<endl;
}
    
    




  
        
