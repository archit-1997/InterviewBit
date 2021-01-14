void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unordered_map<int,int> row, col;
    int n=A.size(),m=A[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    //now just start traversing the array first rowwise
    for(int i=0;i<n;i++){
        if(row[i]==1){
            for(int j=0;j<m;j++)
                A[i][j]=0;
        }
    }
    
    //now traverse the array column wise
    for(int j=0;j<m;j++){
        if(col[j]==1){
            for(int i=0;i<n;i++){
                A[i][j]=0;
            }
        }
    }
    

}
