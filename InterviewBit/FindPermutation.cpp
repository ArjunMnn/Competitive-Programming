vector<int> Solution::findPerm(const string s, int n) {
    int mn = 1;
    int mx = n;
    vector<int> res;
    for(auto i:s){
        if(i == 'D'){
            res.push_back(mx);
            mx--;
        }
        else{
            res.push_back(mn);
            mn++;
        }
    }
    res.push_back(mn);
    return res;
}
