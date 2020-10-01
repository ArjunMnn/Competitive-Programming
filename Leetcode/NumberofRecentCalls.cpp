class RecentCounter {
public:
    vector<int> ti;
    RecentCounter() {
        vector<int> ti;
    }
    
    int ping(int t) {
        ti.push_back(t);
        int l = max(t - 3000,1);
        auto i = lower_bound(ti.begin(),ti.end(),l);
        
        return ti.size() -  (i - ti.begin());
    }
};