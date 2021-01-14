vector<int> Solution::plusOne(vector<int> &A) {
    //reverse the given number
    int n=A.size();
    vector<int> v=A;
    reverse(v.begin(),v.end());
    
    int num=v[0];
    num++;
    if(num<=9)
        v[0]=num;
    else{
        v[0]=num%10;
        int carry=num/10;
        for(int i=1;i<n;i++){
            int sum=v[i]+carry;
            v[i]=sum%10;
            carry=sum/10;
            if(carry==0)
                break;
        }
        if(carry!=0)
            v.push_back(carry);
    }
    
    //remove the zeroes before returning the answer
    reverse(v.begin(),v.end());
    vector<int> ans;
    n=v.size();
    int i=0;
    while(v[i]==0)
        i++;
    while(i<n)
        ans.push_back(v[i++]);
        
        
    return ans;
    
}
