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


int ways = 0;
int col[16],d1[16],d2[16],reserved[8][8];
void search(int r){
	if(r == 8){
		ways+=1;
		return;
	}
	for(int c = 0;c<8;c++){
		if(col[c] || d1[r+c] || d2[r-c+7] || reserved[r][c])
			continue;
		col[c] = d1[r+c] = d2[r-c+7] = true;
		search(r+1);
		col[c] = d1[r+c] = d2[r-c+7] = false;
	}

}



int main(){


	for(int	i = 0; i<16 ; i++){
		col[i] = d1[i] = d2[i] = false;
	}
	string x;
	
	for(int	i = 0; i<8 ; i++){
		cin >> x;
		for(int	j = 0; j<8 ; j++)
			if(x[j] == '.')	reserved[i][j] = false;
			else	reserved[i][j] = true;
	}
	search(0);
	cout << ways;
	return 0;
	


}


