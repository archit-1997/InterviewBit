int Solution::gcd(int A, int B) {
    
    int a=max(A,B),b=min(A,B);
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
