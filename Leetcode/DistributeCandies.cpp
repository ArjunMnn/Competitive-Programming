class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        int n = candyType.size();
        for(auto i:candyType){
            s.insert(i);
        }
        int types = s.size();
        int caneat = n/2;
        return min(caneat, types);
    }
};