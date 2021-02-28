#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/

/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}
/************************************/


/******* Debugging Class Template *******/
#define DEBUG

#ifdef DEBUG

    #define debug(args...)     (Debugger()) , args

    class Debugger
    {
        public:
        Debugger(const std::string& _separator = " - ") :
        first(true), separator(_separator){}

        template<typename ObjectType> Debugger& operator , (const ObjectType& v)
        {
            if(!first)
                std:cerr << separator;
            std::cerr << v;
            first = false;
            return *this;
        }
        ~Debugger() {  std:cerr << endl;}

        private:
        bool first;
        std::string separator;
    };

#else
    #define debug(args...)                  // Just strip off all debug tokens
#endif
using namespace std;


int main(void) {
	int t,n,m,q;
	scanf("%d",&t);
	while(t--){
	     scanf("%d",&n);
	     scanf("%d",&q);
	     scanf("%d",&m);
	     int a[n];
	     for(int i = 0;i<n;i++)
	          scanf("%d",&a[i]);
	     int b[1000001] = {0};
	    // int ans[m+1] = {0};
	    map<pair<int,int>,int>d;
	    for(int mu = 0; mu<q;mu++){
	         int l,r;
	         scanf("%d",&l);
	         scanf("%d",&r);
	         l--;
	         r--;
	         if(a[l]>m)
	               continue;
	         else if(a[l]<=m && a[r]>m){
	              b[a[l]]++;
	              b[m+1]--;
	         }
	         else if(a[r]<=m){
	              b[a[l]]++;
	              b[m+1]--;
	              d[{a[l],a[r]}]++;
	         }
	    }
	    for(auto i:d){
	         int first = i.first.first;
	         int second = i.first.second;
	         int v = i.second;
	         b[second+first]-=v;
	         b[second+2*first]+=v;
	         int c = second+2*first;
	         while(c+second<=m){
	              c+=second;
	              b[c]-=v;
	              b[c+first]+=v;
	              c+=first;
	         }
	    }
	    int maxn = 0;
	    for(int i = 1;i<=m;i++){
	         
	         b[i]+=b[i-1];
	         maxn = max(maxn,b[i]);
	    }
	    printf("%d\n",maxn);
	     
	}
	return 0;
}

