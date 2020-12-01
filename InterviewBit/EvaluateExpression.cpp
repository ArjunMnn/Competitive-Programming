int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    for(auto i:A){
        if(i=="-" || i=="+" || i=="*" || i=="/"){
            int op2 = (s.top());
            s.pop();
            int op1 = (s.top());
            s.pop();
            int ans;
            if(i == "+")
                ans = op1+op2;
            else if(i == "-")
                ans = op1-op2;
            else if(i == "*")
                ans = op1*op2;
            else
                ans = op1/op2;
            s.push(ans);
        }
        else{
            s.push(stoi(i));
        }
    }
    return s.top();
}
