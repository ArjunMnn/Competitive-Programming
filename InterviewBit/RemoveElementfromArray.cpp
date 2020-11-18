int Solution::removeElement(vector<int> &A, int B) {
    int i = 0;
    int j = i;
    while(i<A.size()){
        if(A[i]==B){
            while(j<A.size() && A[j]==B){
                j++;
            }
            if(j<A.size())
                swap(A[i],A[j]);
            
        }
        i++;j++;
    }
    
    i = A.size()-1;
    while(A[i]==B){
        i--;
    }
    
    return i+1;
    
}