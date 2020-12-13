class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        int i = 2,j = 2;
        while(j<nums.size()){
            if(nums[i-2]!=nums[j]){
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};