int Solution::trailingZeroes(int A) {
    int ans=0;
    
    int val=5;
    
    while(1){
        int q=A/val;
        if(q==0)
            return ans;
        ans+=q;
        val=val*5;
    }
}
