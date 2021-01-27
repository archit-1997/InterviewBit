vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int row=A.size(),col=A[0].size();
    
    int u=0,d=row-1,l=0,r=col-1,dir=0;
    vector<int> ans;
    
    while(l<=r && u<=d){
        if(dir==0){
            //you have to print the first row
            for(int i=l;i<=r;i++)
                ans.push_back(A[u][i]);
                //cout<<A[u][i]<<" ";
            u++;
            dir=1;
        }
        else if(dir==1){
            //you have to print the right row
            for(int i=u;i<=d;i++)
                ans.push_back(A[i][r]);
                //cout<<A[i][r]<<" ";
            r--;
            dir=2;
        }
        else if(dir==2){
            //you have to print the bottom row here
            for(int i=r;i>=l;i--)
                ans.push_back(A[d][i]);
                //cout<<A[d][i]<<" ";
            d--;
            dir=3;
        }
        else if(dir==3){
            //here you have to print the left row here
            for(int i=d;i>=u;i--)
                ans.push_back(A[i][l]);
                //cout<<A[i][l]<<" ";
            l++;
            dir=0;
        }
    }
    
    return ans;
}

