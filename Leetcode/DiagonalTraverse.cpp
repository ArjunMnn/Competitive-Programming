class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); 
        if(m == 0)
            return {};
        int n = matrix[0].size();
        if(n == 0)
            return {};
        int dir = 1;  // 1 means up and -1 means down
        int i = 0, j = 0;
        vector<int> ans;
        while(i<m && j<n){
            ans.push_back(matrix[i][j]);
            int x,y;
            if(dir == 1){ x = i - 1; y = j + 1;
            }
            else{ x = i + 1; y = j - 1;
            }
            if(x>=0 && x<m && y>=0 && y<n){
                i = x; j = y;
            }
            else{
                if(dir == 1){ j++;
                    if(j>=n){ j--; i++;
                    }
                }
                else{
                    i++;
                    if(i>=m){ j++;i--; }
                }
                dir *= -1;
            }
        }
        return ans;
    

    }
};