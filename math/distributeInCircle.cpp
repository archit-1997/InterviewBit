int Solution::solve(int A, int B, int C) {
    
    //first check for overflow
    if(A+C>B){
        int gap=B-C;
        A=A-gap;
        
        //check for rounds
        A=A%B;
        if(A==0)
            return B;
        return A-1;
    }
    else
        return A+C-1;
    
}
