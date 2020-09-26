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


void solve() {
	int n;
	cin >> n;
	int a;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		s.insert(a);

	}
	int ans = s.size();
	cout << ans << endl;


    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}