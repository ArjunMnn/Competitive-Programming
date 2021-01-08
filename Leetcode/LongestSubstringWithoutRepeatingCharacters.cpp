class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> d;
        int start = 0, max1 = 0, sum = 0;
        for(int i = 0; i<s.size(); i++){
            if(d.find(s[i])!=d.end() && d[s[i]]>=start){
                max1 = max(max1, sum);
                sum = i - d[s[i]];
                start = d[s[i]]+1;
            }
            else
                sum++;
            d[s[i]] = i;
        }
        return max(max1,sum);
    }
};