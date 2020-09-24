#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int arr[n][n];
	
	for (int j = 0;j<n;j++){
		for(int i = 0;i<n;i++){
			cin >> arr[j][i];
		}
	}

	int c = 0;
	for(int i = n-1;i>0;i--){
		// cout << arr[i][i-1]+1 << " ";
		int done = arr[i][i-1]+1;
		if(done!=arr[i][i]){
			c+=1;
			
			int d = i + 1;
			for(int x = 0;x<d;x++){
				for(int y = x;y<d;y++){
					int temp = arr[x][y];
					arr[x][y] = arr[y][x];
					arr[y][x] = temp;

				}
			}

		}
	}
	cout << c << endl;



	
}
int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
}
