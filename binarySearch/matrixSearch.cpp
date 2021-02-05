
//first find the row of the matrix
int findRow(vector<vector<int>> &A, int B){
    int r=A.size(),c=A[0].size();
    int low=0,high=r-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(B>=A[mid][0] && B<=A[mid][c-1])
            return mid;
        else if(B>A[mid][c-1])
            low=mid+1;
        else
            high=mid-1;
    }
    
    return -1;
}

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    int r=A.size(),c=A[0].size();
    
    int rn=findRow(A,B);
    
    if(rn==-1)
        return 0;
        
    vector<int> v=A[rn];
    
    int pos=lower_bound(v.begin(),v.end(),B)-v.begin();
    if(pos<c && v[pos]==B)
        return 1;
    else
        return 0;
    
}
