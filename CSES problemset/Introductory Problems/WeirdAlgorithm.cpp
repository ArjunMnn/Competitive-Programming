#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include <cmath>
#define ll unsigned long long int 
using namespace std;
int main(){
	ll n;
	cin >> n;
	cout << n << " ";
	while(n>1){
	if(n%2){
		n = (n*3)+1;
		cout << n << " ";
	}
	else{
		n = n/2;
		cout << n << " ";
	}
}

}