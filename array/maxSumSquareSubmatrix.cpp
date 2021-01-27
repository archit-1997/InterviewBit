int Solution::solve(vector<vector<int> > &A, int B) {
    
    int n=A.size(),m=A[0].size();
    int r=n-B+1;
    vector<vector<int>> v(r,vector<int> (m));
    
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<B;i++){
            sum+=A[i][j];
        }
        v[0][j]=sum;
    }
    
    for(int i=B;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=v[i-B][j];
            sum=sum+A[i][j]-A[i-B][j];
            v[i-B+1][j]=sum;
        }
    }
    
    //now v has the sum with vertical strips
    int ans=INT_MIN;
    for(int i=0;i<r;i++){
        //take the sum of first three columns
        int sum=0;
        for(int j=0;j<B;j++)
            sum+=v[i][j];
        ans=max(ans,sum);
        //now the remaining columns
        for(int j=B;j<m;j++){
            sum=sum+v[i][j]-v[i][j-B];
            ans=max(ans,sum);
        }
    }
    
    return ans;
    
    
    
    
    
}
