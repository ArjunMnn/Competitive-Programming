int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> d;
    for(auto i:A)
        d[i]++;
    int c = 0;
    for(int i:A){
        if(d.find(i^B)!=d.end())    c++;
    }
    return c/2;
}
