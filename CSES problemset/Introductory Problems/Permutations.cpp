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
	
	int n;
	cin >> n;
	if (n==1){
		cout << 1 << endl;
		return 0;
	}
	if(n<=3){
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	if(n==4){
		cout << 2 <<  " " << 4 << " " << 1 << " " << 3;
		return 0;
	}
	for(int i = 1;i<=2;i++)

		for(int j = i;j<=n;j+=2){
			cout << j << " ";
						
	}
	cout << endl;
	


}


