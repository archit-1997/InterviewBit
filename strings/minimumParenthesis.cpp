int Solution::solve(string A) {
    stack<char> st;
    int ans=0;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]=='(')
            st.push(A[i]);
        else{
            //we know that the new character is ')'
            if(st.empty() || st.top()==')')
                ans++;
            else
                st.pop();
            
        }
    }
    ans=ans+st.size();
    return ans;
}
