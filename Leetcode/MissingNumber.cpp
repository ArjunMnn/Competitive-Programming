class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(INT_MAX);
        for(int i = 0;i<n;i++){
            if(nums[i] == INT_MIN)
                nums[0]*=-1;
            else if(nums[abs(nums[i])] == 0)
                nums[abs(nums[i])] = INT_MIN;
            else
                nums[abs(nums[i])] *= -1;
        }
        for(int i = 0;i<=n;i++){
            if(nums[i]<0 || nums[i] == INT_MIN)
                continue;
            else
                return i;
        }
        return 0;
    }
};