#define ll long long 
#define mod 1000000007
int Solution::solve(string A) {
    ll vow = 0, con = 0, num = 0;
    for(auto i:A){
        if(i == 'a' || i=='e' || i=='i' || i=='o' || i=='u'){
            vow++; num+=con;
        }
        else{
            con++; num+=vow;
        }
    }
    return num%mod;
}
