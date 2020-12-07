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

string solve(){
    int n;
    string s;
    cin >> n >> s;
    sort(s.begin(),s.end());
    return s;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
    
}

