int Solution::repeatedNumber(const vector<int> &nums) {
    int n = nums.size();
    int hare = nums[0];
    int tor = nums[0];
    while(1){
        tor = nums[tor];
        hare = nums[nums[hare]];
        if(tor == hare)
            break;
    }
    int ptr1= nums[0];
    int ptr2 = hare;
    while(ptr1!=ptr2){
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }
    return ptr1;

}
