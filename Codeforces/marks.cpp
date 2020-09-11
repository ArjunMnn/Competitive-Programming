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

void solve(){
    string s,t;
    cin >> s >> t;
    int n = t.size();
    int i = 0,j = 0;
    while(i<s.size() && j<t.size()){
        if (s[i] == t[i]){
            i++;
            j++;
        }
        else{
            j+=1;
        }
    }
    cout << i << endl;
}

int main(){
    
    solve();
    
}