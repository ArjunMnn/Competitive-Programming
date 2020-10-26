int Solution::titleToNumber(string str) {
    int ans = 0;
    for(int i = 0;i<str.length();i++){
        ans*=26;
        ans+=str[i]-'A'+1;
        
    }
    return ans;
}
