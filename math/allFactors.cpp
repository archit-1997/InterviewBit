vector<int> Solution::allFactors(int A) {
    
    vector<int> ans;
    int n=A;
    for(int i=1;i<=sqrt(A);i++){
        if(n%i==0){
            ans.push_back(i);
            if((n/i)!=i)
                ans.push_back(n/i);
        }
    }
    
    sort(ans.begin(),ans.end());
    
    return ans;
}
