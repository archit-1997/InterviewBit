int Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> left(n),right(n);
    
    //fill the right part
    right[n-1]=-1;
    int big=A[n-1];
    for(int i=n-2;i>=0;i--){
        if(A[i]>=big){
            right[i]=-1;
            big=A[i];
        }
        else
            right[i]=big;
    }
    
    //fill the left part
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(A[i]);
        auto it=st.find(A[i]);
        
        if(it!=st.begin()){
            --it;
            left[i]=*it;
        }
        else
            left[i]=-1;
    }
    
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(left[i]!=-1 && right[i]!=-1){
            int sum=left[i]+right[i]+A[i];
            ans=max(ans,sum);
        }
    }
    
    return ans;
}
