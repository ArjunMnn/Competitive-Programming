int Solution::maxArr(vector<int> &arr) {
    int max1=INT_MIN,min1=INT_MAX;
    int max2=INT_MIN,min2=INT_MAX;
    for(int i=0; i<arr.size(); i++)
    {
    max1=max(max1,arr[i]+i);
    min1=min(min1,arr[i]+i);
    max2=max(max2,arr[i]-i);
    min2=min(min2,arr[i]-i);
    }
    return max(abs(max1-min1),abs(max2-min2));
    
}
