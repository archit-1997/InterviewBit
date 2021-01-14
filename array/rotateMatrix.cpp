void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    
    //first lets take the transpose along the top row
    for(int j=0;j<n;j++){
        int x1=0,y1=j;
        int x2=n-1-j,y2=n-1;
        while(x1<x2 && y1<y2){
            swap(A[x1][y1],A[x2][y2]);
            x1++,y1++,x2--,y2--;
        }
    }
    
    //transpose along the leftmost column
    for(int i=1;i<n;i++){
        int x1=i,y1=0;
        int x2=n-1,y2=n-1-i;
        while(x1<x2 && y1<y2){
            swap(A[x1][y1],A[x2][y2]);
            x1++,y1++,x2--,y2--;
        }
    }
    
    //now lets reverse the columns of the matrix
    for(int j=0;j<n;j++){
        int up=0,down=n-1;
        while(up<down){
            swap(A[up][j],A[down][j]);
            up++,down--;
        }
    }
    
}
