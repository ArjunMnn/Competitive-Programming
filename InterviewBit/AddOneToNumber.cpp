vector<int> Solution::plusOne(vector<int> &v) {
    int i = 0;
    while(i<v.size()){
        if(v[i] == 0)
            v.erase(v.begin());
        else
            break;
    }
    int j = v.size()-1;
    while(j>=0){
        if(v[j] == 9){
            v[j] = 0;
            j--;
        }
        else{
            v[j]++;
            break;
        }
        
    }
    if(v[0] == 0){
        v.insert(v.begin(),1);
    }
    
    return v;
}