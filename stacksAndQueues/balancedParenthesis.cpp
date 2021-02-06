
int Solution::solve(string A) {
    int n=A.size();
    
    stack<char> st;
    
    int i=0;
    
    while(i<n){
        if(A[i]=='(')
            st.push(A[i]);
        else if(A[i]==')'){
            //if stack is empty or we have the wrong character at the top
            if(st.empty() || st.top()!='(')
                return 0;
            st.pop();
        }
        i++;
    }
    
    if(st.empty())
        return 1;
    else
        return 0;
}
