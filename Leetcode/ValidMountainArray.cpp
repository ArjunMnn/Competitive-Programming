class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int prev = arr[0],i;
        bool start = 0, end = 0;
        for(i = 1;i<arr.size();i++){
            
            if(arr[i]>prev){
                prev = arr[i];
                start = 1;
            }
            else{
                // cout << i << endl;
                break;
            }
        }
        if(start==0)
            return false;
        for(;i<arr.size();i++){
            if(arr[i]<prev){
                prev = arr[i];
                end = 1;
            }
            else
                return false;
        }
        return end == 1 && start == 1;
    }
};