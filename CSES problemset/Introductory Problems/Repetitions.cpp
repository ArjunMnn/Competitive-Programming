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
	string s;
	cin >> s;
	char prev = s[0];
	ll c = 1;
	ll maxc = 1;
	for(ll i = 1;i<s.size();i++){
		if(s[i] == prev)
			c++;
		else{
			prev = s[i];
			maxc = max(maxc,c);
			c = 1;
		}
	}
	maxc = max(c,maxc);
	cout << maxc << endl;
}