int Solution::solve(int A, int B) {
    
    int ans=0;
    
    //right top
    int sum=A+B;
    int a=A,b=B;
    while(a>1 && b<8){
        a--,b++;
        ans++;
    }
    
    a=A,b=B;
    //left top
    while(a>1 && b>1){
        a--,b--;
        ans++;
    }
    
    a=A,b=B;
    //right bottom
    while(a<8 && b<8){
        a++,b++;
        ans++;
    }
    
    a=A,b=B;
    while(a<8 && b>1){
        a++,b--;
        ans++;
    }
    
    return ans;
}
