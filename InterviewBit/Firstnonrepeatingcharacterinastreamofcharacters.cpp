string Solution::solve(string A) {
    int arr[26];
    for(int i = 0;i<26;i++)
        arr[i]=0;
    queue<int> q;
    string res = "";
    for(auto i:A){
        arr[i-'a']+=1;
        while(!q.empty() && arr[q.front()-'a']!=1){
            q.pop();
        }
        if(!q.empty()){
            res+=q.front();
        }
        else{
            if(arr[i-'a']==1)
                res+=i;
            else
                res+="#";
        }
        q.push(i);
    }
    return res;
}
