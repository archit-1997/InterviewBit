vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int n=A.size();
vector<vector<int>> v;

long long sum=0;

sort(A.begin(),A.end());

for(int i=0;i<n-2;i++){
    
    int start=i+1,end=n-1;
    
    while(start<end){
        
        sum=(long long )(A[i])+(A[start])+(A[end]);
        if(sum==0){
        v.push_back({A[i],A[start],A[end]});
        start++;
        end--;
         }
        else if(sum>0)
        end--;
        else
        start++;
}
}
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());

return v;
}
