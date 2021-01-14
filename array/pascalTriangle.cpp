vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    if(A==0)
        return ans;
    vector<int> v={1};
    ans.push_back(v);
    if(A==1)
        return ans;
    
    //start filling from the 2nd row which means i=1
    for(int i=1;i<A;i++){
        vector<int> tmp(i+1,1);
        for(int j=0;j<=i;j++){
            if(j==0)
                tmp[j]=1;
            else if(j==i)
                tmp[j]=v[j-1];
            else
                tmp[j]=v[j]+v[j-1];
        }
        v=tmp;
        ans.push_back(v);
    }
    
    return ans;
    
}
