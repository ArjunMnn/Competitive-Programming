class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> f1,f2;
        for(int i=1;i<int(sqrt(n))+1;i++){
            if(n%i==0){
                f1.push_back(i);
                f2.push_back(n/i);
            }
        }
        if(f1[f1.size()-1]==f2[f2.size()-1])
            f2.pop_back();
        reverse(f2.begin(),f2.end());
        for(auto i:f2)
            f1.push_back(i);
        return f1.size()<k?-1:f1[k-1];
        
    }
};