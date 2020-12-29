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

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    priority_queue<pair<int,pair<int,int>>> heap;
    set<pair<int, int> > s;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n = A.size();
    heap.push(make_pair(A[n-1]+B[n-1],make_pair(n-1,n-1)));
    s.insert(make_pair(n-1,n-1));
    int k = n;
    vector<int> ans;
    while(k--){
        pair<int,pair<int,int>> top = heap.top();
        heap.pop();
        ans.push_back(top.first);
        int l = top.second.first;
        int r = top.second.second;
        if(l>=0 && r-1>=0 && s.find(make_pair(l,r-1))==s.end()){
            heap.push(make_pair(A[l]+B[r-1],make_pair(l,r-1)));
            s.insert(make_pair(l,r-1));
        }
        if(l-1>=0 && r>=0 && s.find(make_pair(l-1,r))==s.end()){
            heap.push(make_pair(A[l-1]+B[r],make_pair(l-1,r)));
            s.insert(make_pair(l-1,r));
        }
        
    }
    return ans;
    
}
