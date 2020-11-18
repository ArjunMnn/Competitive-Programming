int Solution::solve(vector<int> &A, int B) 
{
    map<int,int> m;
    
    for(int i=0;i<A.size();i++)
    {
        if(m.find(B+A[i])!=m.end()||m.find(A[i]-B)!=m.end())
        {
            return true;
        }
        m[A[i]]=1;
    }
    return false;
}