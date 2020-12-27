// A message containing letters from A-Z is being encoded to numbers using the following mapping:

// 'A' -> 1
// 'B' -> 2
// ...
// 'Z' -> 26
// Given a non-empty string containing only digits, determine the total number of ways to decode it.

// The answer is guaranteed to fit in a 32-bit integer.

 

// Example 1:

// Input: s = "12"
// Output: 2
// Explanation: It could be decoded as "AB" (1 2) or "L" (12).
// Example 2:

// Input: s = "226"
// Output: 3
// Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).




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