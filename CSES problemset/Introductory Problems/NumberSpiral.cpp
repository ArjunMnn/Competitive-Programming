#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
#include<vector>
#define ll long long int
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> x >> y;
		if (y>x){
			ll ans;
			if(y%2){
				ans = ((y)*(y)) - x + 1;
			}
			else{
				ans = (y-1)*(y-1)+x;
			}
			cout << ans << endl;
		}
		else{
			ll ans;
			if (x%2)
				ans = (x-1)*(x-1) + y;
			else
				ans = (x*x) -y+1;
			cout << ans << endl;
		}
		
 
	}
 
	
 
 
}