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
        if (s[i] == t[j]){
            i++;
            j++;
        }
        else{
            j+=1;
        }
    }
    cout << i+1 << endl;
}

int main(){
    
    solve();
    
}