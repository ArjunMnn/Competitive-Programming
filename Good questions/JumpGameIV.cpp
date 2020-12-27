class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n<=1)
            return 0;
        unordered_map<int,vector<int>> d;
        for(int i = 0;i<arr.size();i++){
            d[arr[i]].push_back(i);
        }
        
        vector<int> curs = {0};
        unordered_set<int> vis;
        vis.insert(0);
        vector<int> nn;
        nn = curs;
        
        int step = 0;
        while(!curs.empty()){
            vector<int> nex;
            for(auto node:curs){
                if(node == n-1)
                    return step;
                
                for(auto child:d[arr[node]]){
                    if(vis.find(child)==vis.end()){
                        vis.insert(child);
                        nex.push_back(child);
                    }
                }
                d[arr[node]].clear();

                int ne[] = {node-1,node+1};
                for(auto child:ne){
                    if(child>=0 && child<arr.size() && vis.find(child)==vis.end()){
                        vis.insert(child);
                        nex.push_back(child);
                    }
                }
                
            }
            curs = nex;
                step++;
        }
        return -1;
        
    }
};