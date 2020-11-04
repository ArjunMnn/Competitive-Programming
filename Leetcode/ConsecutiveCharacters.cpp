class Solution {
public:
    int maxPower(string s) {
        char prev = s[0];
        int c = 1;
        int maxc = 1;
        for(int i = 1;i<s.length();i++){
            if(s[i]==prev){
                c++;
                maxc = max(maxc,c);
                
            }
            else{
                c=1;
                
            }
            prev = s[i];
        }
        return maxc;
    }
};