class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> d;
        for(int i = 0; i < nums.size(); i++){
            if(d.find(nums[i])==d.end())
                d[nums[i]]=1;
            else
                d[nums[i]]++;
        }
        for(auto i: d){
            if(d.find(i.first - 1)!=d.end())
                res = max(res, i.second+d[i.first-1]);
            if(d.find(i.first + 1)!=d.end())
                res = max(res, i.second+d[i.first + 1]);
        }
        return res;
    }
};