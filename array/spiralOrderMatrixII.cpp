vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> v(A,vector<int> (A,0));
    int count=1;
    int l=0,r=A-1,u=0,d=A-1;
    int dir=0;
    while(l<=r && u<=d){
        if(dir==0){
            //we have to traverse the top row
            for(int j=l;j<=r;j++){
                v[u][j]=count++;
            }
            u++;
            dir=1;
        }
        else if(dir==1){
            //we have to traverse the right column
            for(int i=u;i<=d;i++){
                v[i][r]=count++;
            }
            r--;
            dir=2;
        }
        else if(dir==2){
            //we have to traverse the bottom row
            for(int j=r;j>=l;j--){
                v[d][j]=count++;
            }
            d--;
            dir=3;
        }
        else if(dir==3){
            //we have to traverse the left column
            for(int i=d;i>=u;i--){
                v[i][l]=count++;
            }
            l++;
            dir=0;
        }
    }
    
    return v;
}
