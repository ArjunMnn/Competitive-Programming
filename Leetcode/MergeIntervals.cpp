class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> res;
        for(int i = 0;i<A.size();i++){
            int n = res.size();
            if(res.empty() || res[n-1][1]<A[i][0])
                res.push_back({A[i][0],A[i][1]});
            else
                res[n-1][1] = max(res[n-1][1],A[i][1]);
            
        }
        return res;
    }
};