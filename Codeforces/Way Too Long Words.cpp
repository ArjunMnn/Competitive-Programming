#include <iostream>
// using namespace std;
// #include <bits/stdc++.h> 
#include<unordered_set>
#include<vector>
#define ll long long  
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int solve(){
    int n,m;
    cin >> n >> m;
    string a[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
            cin >> a[i][j];
    }
    int ans = 0;
    for( int i  = 0;i<n;i++){
        bool wasbest = false;
        for(int j = 0;j<m;j++){
            bool isbest = true;
            for(int k = 0;k<n;k++)
                if(a[k][j]>a[i][j])
                    isbest = false;
            if(isbest)
                wasbest = true;

        }
        if(wasbest)
            ans++;

    }
    return 0;
}

int main(){
    
    
        solve();
    
}