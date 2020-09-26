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
 
#define int long long
#define MOD 1000000007
 
using namespace std;
bool vis[7][7];
string s;

int res = 0;

bool e(int x,int y){
	return(x>=0 && y>=0 && x<7 && y<7 && !vis[x][y]);
}

void dfs(int i, int j, int it) {
	// cout << i << " " << j << endl;
	if (i == 6 && j == 0){
		if(it == 48)
			res++;
		return;
	}
	vis[i][j] = 1;
	if(s[it]=='?' || s[it] == 'L'){
		if (j && !vis[i][j-1]){
			if (!(!e(i,j-2)&&e(i+1,j-1)&&e(i-1,j-1)))
				dfs(i,j-1,it+1);
		}
	}
	if(s[it]=='?' || s[it] == 'R'){
		if (j<6 && !vis[i][j+1]){
			if (!(!e(i,j+2)&&e(i+1,j+1)&&e(i-1,j+1)))
				dfs(i,j+1,it+1);
		}
	}
	if(s[it]=='?' || s[it] == 'U'){
		if (i && !vis[i-1][j]){
			if (!(!e(i-2,j)&&e(i-1,j+1)&&e(i-1,j-1)))
				dfs(i-1,j,it+1);
		}
	}
	if(s[it]=='?' || s[it] == 'D'){
		if (i<6 && !vis[i+1][j]){
			if (!(!e(i+2,j)&&e(i+1,j-1)&&e(i+1,j+1)))
				dfs(i+1,j,it+1);
		}
	}
	vis[i][j] = 0;
}

void solve() {
   
    cin >> s;
    dfs(0, 0, 0);
    cout << res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}