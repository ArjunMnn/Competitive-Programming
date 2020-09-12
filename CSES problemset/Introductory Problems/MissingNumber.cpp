#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include <cmath>
#include<vector>
#define ll unsigned long long int 
using namespace std;

int main(){
	ll n;
	 cin >> n;
	 vector<int> v;
	 int a;
	 for(ll i = 0;i<n-1;i++){
	 	cin >> a;
	 	v.push_back(a);
	 }
	 bool flag = false;
	 sort(v.begin(),v.end());
	 for(ll i = 0;i<n-1;i++){
	 	// cout << v[i] << endl;
	 	if(v[i]!=i+1){
	 		cout << i+1 << endl;
	 		flag = true;
	 		break;
	 	}
	 	


	 }
	 if ( !flag){
	 	cout << n;

	 }


}