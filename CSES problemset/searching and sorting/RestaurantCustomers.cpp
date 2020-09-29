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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    lli a,b;
    cin >> n;
    priority_queue<pair<int,bool>> q;
    while(n--){
    	cin >> a >> b;
    	q.push({-a,true});
    	q.push({-b,false});
    }
    lli x = 0;
    lli ans = 0;
    while(!q.empty()){
    	x+=q.top().second?1:-1;
    	q.pop();
    	ans = max(ans,x);
    }
    cout << ans << endl;




    return 0;

}
  
        
