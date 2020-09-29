#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define lli long long int
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include <cmath>
#include <queue> 
#include <utility> 
using namespace std;
const lli mod = 1e9 + 7;


bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    lli a,b;
    cin >> n;
    vector< pair <int,int> > v;
    pair<int,int> p;
    while(n--){
    	cin >> a >> b;
    	p.first = a;
    	p.second = b;
    	v.push_back(p); 
    }
    int i = 0;
    int c = 1;
    sort(v.begin(), v.end(), sortbysec);
    for (int j = 0; j < v.size(); ++j)
    {

        if (v[i].second<=v[j].first){
            c+=1;
            i = j;
        }
    }
    cout << c << endl;




    return 0;

}
  
        
