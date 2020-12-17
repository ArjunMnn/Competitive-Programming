class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> c1;
        unordered_map<int,int> c2;
        long long ans = 0;
        for(int i = 0;i<A.size();i++)
            for(int j = 0;j<A.size();j++)
                c1[A[i]+B[j]]+=1;
        
        for(int i = 0;i<A.size();i++)
            for(int j = 0;j<A.size();j++)
                c2[C[i]+D[j]]+=1;
            
        for(auto val: c1)
            if(c2.find(-(val.first))!=c2.end())
                ans+=val.second*c2[-(val.first)];
        return ans;

    }
};