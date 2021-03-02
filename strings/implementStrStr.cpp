int Solution::strStr(const string A, const string B) {
    int n1=A.size(),n2=B.size();
    
    if(n1==n2){
        if(A==B)
            return 0;
        else
            return -1;
    }
    else if(n2>n1)
        return -1;
    else{
        int i,j;
        for(i=0;i<=(n1-n2);i++){
            int index=i;
            for(j=0;j<n2;j++){
                if(A[index]==B[j]){
                    index++;
                }
                else
                    break;
            }
            if(j==n2)
                return i;
        }
        return -1;
    }
    
}
