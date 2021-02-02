
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int a=A.size(),b=B.size(),c=C.size();
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<a && j<b && k<c){
        int v1=abs(A[i]-B[j]);
        int v2=abs(B[j]-C[k]);
        int v3=abs(C[k]-A[i]);
        
        ans=min(ans,max(v1,max(v2,v3)));
        
        int small=min(A[i],min(B[j],C[k]));
        
        if(A[i]==small)
            i++;
        else if(B[j]==small)
            j++;
        else
            k++;
    }
    
    return ans;
    
}
