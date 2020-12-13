class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> rem(60);
        for(auto i:time){
            rem[i%60]+=1;
        }
        int i=1,j=59,res=0;
        while(i<j){
            res+=(rem[i]*rem[j]);
            i++;j--;
        }
        return ((rem[0]*(rem[0]-1))/2)+res+((rem[30]*(rem[30]-1))/2);
    }
};