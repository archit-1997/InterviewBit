string Solution::solve(string A, int B) {
    int n=A.size();
    string ans="";
    int i=0;
    while(i<n){
        int count=0;
        int index=i;
        string tmp="";
        while(index<n && A[index]==A[i]){
            count++;
            tmp=tmp+A[index];
            index++;
        }
        if(count!=B)
            ans=ans+tmp;
        i=index;
    }
    return ans;
}
