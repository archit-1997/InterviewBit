int Solution::solve(int A) {
    int ans=0,sum=0;
    
    A=abs(A);
    while(sum<A || (sum-A)%2!=0){
        ans++;
        sum+=ans;
    }
    
    return ans;
}
