class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size(),0);
        if(s[0]!='0'){
            dp[0] = 1;
            for(int i = 1; i < s.size(); i++){
                if(s[i]!='0')
                    dp[i] += dp[i-1];
                
                if(s[i-1] == '1' || (s[i-1] == '2' && s[i]-'0'<7)){
                    
                    if (i-2>0)
                        dp[i] += dp[i-2];
                    else
                        dp[i] += 1;
                }
            }  
        }
        return dp[s.size()-1];
    }
};