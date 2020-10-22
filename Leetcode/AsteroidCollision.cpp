class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for(int ast:asteroids){
            bool f = false;
            while(!stack.empty() && ast<0 && stack.back()>0){
                if(stack.back()<-ast){
                    stack.pop_back();
                    continue;
                }
                else if(stack.back() == -ast){
                    stack.pop_back();
                }
                f = true;
                break;
            }
            if(!f)
                stack.push_back(ast);
        }
        return stack;
    }
};