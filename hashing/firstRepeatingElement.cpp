
int Solution::solve(vector<int> &A) {
    map<int,int> hash;
    int n=A.size();
    
    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }
    
    for(int i=0;i<n;i++){
        int val=hash[A[i]];
        if(val>1)
            return A[i];
    }
    
    return -1;
}
