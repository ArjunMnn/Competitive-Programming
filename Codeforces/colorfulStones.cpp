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
    int prev = arr[0];
    ll maxc = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i]<prev){
            ll c = prev - arr[i];
            arr[i] += c;
            prev = arr[i];
            maxc = max(maxc,c);
        }

    }
    cout << maxc << endl;


}
