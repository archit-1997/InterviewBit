int Solution::isPalindrome(int A) {
    string num=to_string(A);
    int n=num.size();
    int i=0,j=n-1;
    while(i<j){
        if(num[i]!=num[j])
            return 0;
        i++,j--;
    }
    
    return 1;
}
