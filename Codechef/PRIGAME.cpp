#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int primes[1000001];
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     // sieve of eratosthernes code
    int n = 1000000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    int res = 0;
    for (int p = 2; p <= n; p++){
        if (prime[p])
            res++;
        
        primes[p] = res;
    }

     int t;
     scanf("%d",&t);
     while(t--){
          int x,y,nprimes;
          scanf("%d", &x);
          scanf("%d", &y);
          nprimes = primes[x];
          if(nprimes>y)
               printf("%s\n", "Divyam");
          else
               printf("%s\n", "Chef");
     }
	return 0;
}