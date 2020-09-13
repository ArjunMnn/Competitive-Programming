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
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	ll prev = arr[0];
	ll c = 0;
	for(int i = 1;i<n;i++){
		if(arr[i]<prev){
			c += prev - arr[i];
			arr[i]  = prev;
			
			
		}
		prev = arr[i];

	}
	cout << c << endl;


}

