class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int minn = INT_MAX;
        for(int j = 0;j<nums.size()-1;j++){
            minn = min(minn,nums[j]);
            for(int k = j+1;k<nums.size();k++){
                if (nums[k]<nums[j] && minn<nums[k])
                    return true;
            }
        }
        return false;
    }
};