class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        bool flag = false;
        int i,j;
        for(i = num.size()-2; i>=0; i--){
            if(num[i]<num[i+1]){
                flag = true;
                break;
            }
        }
        if(!flag)
            return -1;
        for(j = num.size()-1 ;j>i; j--){
            if(num[j]>num[i])
                break;
        }
        swap(num[i],num[j]);
        reverse(num.begin()+i+1,num.end());
        long long ans = stoll(num);
        cout << ans << endl;
        return ans>INT_MAX?-1:ans;
    }
};