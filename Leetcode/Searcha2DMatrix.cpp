class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int last = matrix[0].size()-1;
        int l = 0;
        int r = matrix.size()-1;
        while(l<=r){
             int mid = (l+r)/2;
            if (matrix[mid][last]==target)
                return true;
            else if (matrix[mid][last]>target)
                r = mid - 1;
            else
                l = mid + 1;
        
        }
        if(l>=matrix.size())
            return false;
        auto it = lower_bound(matrix[l].begin(),matrix[l].end(),target);
        if (it - matrix[l].begin()>=matrix[l].size())
            return false;
        if (matrix[l][it - matrix[l].begin()]== target)
            return true;
        return false;
    }
};