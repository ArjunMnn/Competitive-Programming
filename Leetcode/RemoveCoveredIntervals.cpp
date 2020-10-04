
class Solution {
public:
    
    static bool sortbysec(const vector<int> &a, 
              const vector<int> &b) 
    { 
        return a[0] != b[0]?a[0]<b[0]:a[1]>b[1];
    } 
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sortbysec);
        int j = 0;
        int res = intervals.size();
        for(int i = 1;i<intervals.size();i++){
            if (intervals[i][0]>=intervals[j][0] && intervals[i][1]<=intervals[j][1])
                res-=1;
            else
                j = i;
        }
        return res;
    }
};