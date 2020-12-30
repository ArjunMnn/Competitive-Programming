class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> copy;
        for(int i = 0;i<board.size();i++){
            vector<int> c;
            for(int j = 0;j<board[0].size();j++){
                
                c.push_back(board[i][j]);
            }
            copy.push_back(c);
        }
        vector<std::vector<int> >dirs {{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                int n = 0;
                for(auto arr: dirs){
                    int x = arr[0];
                    int y = arr[1];
                    
                    if(i+x>=0 && i+x<board.size() && j+y>=0 && j+y<board[0].size()){
                        n+=copy[i+x][j+y];
                    }
                }
                if(copy[i][j]==1){
                    if(n<2)
                        board[i][j] = 0;
                    
                    if(n>3)
                        board[i][j] = 0;
                    
                }
                else{
                    if(n==3){
                        board[i][j] = 1;
                    }
                }
            }
        }
        
    }
};