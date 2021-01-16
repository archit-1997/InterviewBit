vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long s1=0,s2=0,e1=0,e2=0;
    long long n=A.size();
    
    for(int i=0;i<n;i++){
        s1+=A[i];
        e1+=((long long )A[i])*((long long )A[i]);
    }
    
    s2=(n*(n+1))/2;
    e2=(n*(n+1)*(2*n+1))/6;
    
    long long d1=s1-s2,d2=e1-e2;
    long long a=d1,b=d2/d1;
    
    long long num1=(b+a)/2;
    long long num2=(b-a)/2;
    
    return {(int)num1,(int)num2};
    
}
