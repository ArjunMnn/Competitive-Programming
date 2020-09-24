#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++)
		cin >> arr[i];
	unordered_set <int> s;
	for (auto i:arr){
		if(i!=0)
		s.insert(i);
	}
	cout << s.size() << endl;
}
int main(){
	int t ;
	cin >> t;
	while(t--)
		solve();
	
}
