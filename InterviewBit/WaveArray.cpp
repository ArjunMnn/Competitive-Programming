vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i = 0;
    int j = 1;
    vector<int> res;
    while(j<A.size()){
        res.push_back(A[j]);
        res.push_back(A[i]);
        i+=2;j+=2;
    }
    if (A.size()%2)
        res.push_back(A[i]);
    return res;
}