void rec(vector<int> A, int i, vector<int> res, vector<vector<int>> &ans){
    if(i == A.size()){
        ans.push_back(res);
        return;
    }
    rec(A,i+1,res,ans);
    res.push_back(A[i]);
    rec(A,i+1,res,ans);
    res.pop_back();
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    rec(A,0,{},ans);
    sort(ans.begin(),ans.end());
    return ans;
}
