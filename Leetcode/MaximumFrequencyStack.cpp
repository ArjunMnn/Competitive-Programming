class FreqStack {
    
public:
    unordered_map<int,int> freq;
    unordered_map<int, vector<int>> group;
    int maxfreq = 0;
    FreqStack() {
        
    }
    
    void push(int x) {
        int f = freq[x] + 1;
        freq[x] = f;
        if(f > maxfreq)
            maxfreq = f;
        group[f].push_back(x);
    }
    
    int pop() {
        int n = group[maxfreq].size()-1;
        int x = group[maxfreq][n];
        group[maxfreq].pop_back();
        freq[x]--;
        if(group[maxfreq].empty())
            maxfreq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */