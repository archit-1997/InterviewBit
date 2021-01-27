
// Return 1 if A is prime, else 0
int Solution::isPrime(int A) {
    if(A==0 || A==1)
        return 0;
        
    if(A==2)
        return 1;
        
    int upperLimit = (int)(sqrt(A));
    for (int i = 2; i <= upperLimit; i++) {
        if (i < A && A % i == 0) return 0;
    }
    return 1;
}
