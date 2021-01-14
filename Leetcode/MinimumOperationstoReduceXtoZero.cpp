class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(auto i: nums)
            sum+=i;
        int target = sum - x;
        if(target == 0)
            return nums.size();
        if(target<0)
            return -1;
        int left = 0, n_target = -1, curr = 0;
        for(int i = 0; i<nums.size(); i++){
            if(curr<target)
                curr+=nums[i];
            while(curr>=target){
                if(curr == target)
                    n_target = max(n_target, i - left + 1);
                curr -= nums[left];
                left+=1;
            }
        }
        return n_target!=-1 ? nums.size() - n_target : -1;
    }
};