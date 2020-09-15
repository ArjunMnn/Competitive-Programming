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
    for(int i = 1;i<=n;i++){
        ll a1 = i*i;
        ll ans = (a1*(a1-1))/2;
        if (i>2){
            ans-=4*(i-2)*(i-1);
        }
        cout << ans << endl;

    }
        

    }

    





