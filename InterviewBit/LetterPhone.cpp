#include <iostream>
#include<unordered_set>
#include<set>
#include<vector>
#define ll long long
#define lld long double
#include<unordered_map>
#include<map>
#include<algorithm>
#include <cstring>
#include <cmath>
#include <queue> 
#include<limits>
#include <utility> 
using namespace std;
const ll mod = 1e9 + 7;
const int mxn = 2e5;


void back(unordered_map<char,string> d_map, string s, int i, string A, vector<string> &ans){
    if(i == A.size()){
        ans.push_back(s);
        return;
    }
    for(auto j: d_map[A[i]]){
        
        s+=j;
        back(d_map,s,i+1,A,ans);
        s.pop_back();
    }
}

vector<string> Solution::letterCombinations(string A) {
    unordered_map<char,string> d_map;
    d_map['0'] = "0";
    d_map['1'] = "1";
    d_map['2'] = "abc";
    d_map['3'] = "def";
    d_map['4'] = "ghi";
    d_map['5'] = "jkl";
    d_map['6'] = "mno";
    d_map['7'] = "pqrs";
    d_map['8'] = "tuv";
    d_map['9'] = "wxyz";
    vector<string> ans;
    back(d_map,"",0,A,ans);
    return ans;
}
