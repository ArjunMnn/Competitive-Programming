class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> d;
        for(auto i:s){
            if (d.find(i)==d.end())
                d.insert({i,1});
            else
                d[i]++;
            
        }
        for(auto i:t){
            if(d.find(i)!=d.end()){
                d[i]--;
                if(d[i]==0){
                    d.erase(i);
                }
            }
            else{
                return i;
            }
            
        }
        return 'a';
    }
};