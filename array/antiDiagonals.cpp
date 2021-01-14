vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    vector<vector<int>> ans;
    int r=A.size(),c=A[0].size();
    
    //store the values starting from the top row and the rightmost part
    for(int i=0;i<c;i++){
        vector<int> tmp;
        int left=0,right =i;
        while(right>=0){
            tmp.push_back(A[left][right]);
            left++,right--;
        }
        ans.push_back(tmp);
    }
    
    //store the values from the rightmost column
    for(int i=1;i<r;i++){
        vector<int> tmp;
        int left=i,right=c-1;
        while(left!=c){
            tmp.push_back(A[left][right]);
            left++,right--;
        }
        ans.push_back(tmp);
    }
    
    return ans;
}
