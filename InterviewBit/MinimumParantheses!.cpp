int Solution::solve(string A) {
    stack<int> s;
    for(auto i:A){
        if(i==')'){
            if(!s.empty() && s.top()=='('){
                s.pop();
            }
            else
                s.push(i);
        }
        else
            s.push(i);
    }
    return s.size();
}
