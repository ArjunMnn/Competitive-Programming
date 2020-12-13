bool compare(Interval i, Interval j){
return(i.start<j.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),compare);
    vector<Interval> res;
    for(auto interval:A){
        if(res.empty() || res[res.size()-1].end<interval.start)
            res.push_back(interval);
        else{
            res[res.size()-1].end = max(interval.end,res[res.size()-1].end);
        }
    }
    return res;
    
}