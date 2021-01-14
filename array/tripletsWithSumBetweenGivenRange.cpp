int Solution::solve(vector<string> &A) {
    int n=A.size();
    vector<float> b(n);
    for(int i=0;i<n;i++)
        b[i]=stof(A[i]);
    
    if(n<3)
        return 0;
    float x=b[0],y=b[1],z=b[2];
    for(int i=3;i<n;i++){
        float sum=x+y+z;
        if(sum>1 && sum<2)
            return 1;
        float temp=b[i];
        if(sum>=2){
            //take the greatest number and replace it with temp
            if(x>y && x>z)
                x=temp;
            else if(y>x && y>z)
                y=temp;
            else
                z=temp;
        }
        else{
            if(x<y && x<z)
                x=temp;
            else if(y<x && y<z)
                y=temp;
            else
                z=temp;
        }
    }
    float sum=x+y+z;
    if(sum>1 && sum<2)
    return 1;
    return 0;
}
