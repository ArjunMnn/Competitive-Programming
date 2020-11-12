class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int k = 0;k<A.size();k++){
            int i = 0;
            int j = A[0].size()-1;
            
            while(i<j){
                int temp = A[k][i];
                A[k][i] = A[k][j];
                A[k][j] = temp;
                i++;j--;
            }
        }
        for(int i = 0;i<A.size();i++){
            for(int j = 0;j<A[0].size();j++){
                A[i][j]^=1;
            }
        }
        return A;
    }
};