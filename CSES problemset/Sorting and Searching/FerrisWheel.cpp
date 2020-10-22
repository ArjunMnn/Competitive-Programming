#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include <cmath>
#include<set>

#define int long long
#define MOD 1000000007
 
using namespace std;


void print(int arr[],int size){
	// int size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void solve() {
	int n,m,k;
	cin >> n >> k;
	int app[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> app[i];
	}
	sort(app,app+n);
	int i = 0;
	int j = n-1;
	int c = 0;
	while (i<=j){
		if (app[i]+app[j]<=k){
			c++;
			i++;
			j--;
		}
		else{
			c++;
			j--;;
		}
	}
	cout << c << endl;

	    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}