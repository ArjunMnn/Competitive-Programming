vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int> m; // target - val, index
    
    for (int i=0; i<A.size(); i++) {
        int diff = B - A[i];
        if (m.count(A[i]) > 0) return {m[A[i]]+1, i+1};
        if (m.count(diff) == 0) m[diff] = i;
    }
    return vector<int>();
}