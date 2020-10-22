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


bool ispri(int n){
     int i;
    
     bool isPrime = true;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        return true;
    else
        return false;

    return 0;
}


int main() {
    ll n,k;
    cin >> n >> k;
    int a[mxn];
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }
    ll lb = *max_element(a,a+n);
    ll rb = 1e18;
    while(lb<rb){
      ll mb = (lb+rb)/2;
      ll c = 0;
      ll ls = 0;
      for (int i = 0; i < n; ++i)
      {
        if(ls+a[i]>mb){
          c++;
          ls = 0;
        }
        ls+=a[i];
      }
      c++;
      if(c>k)
        lb = mb + 1;
      else
        rb = mb;
    }
    cout << lb;
}