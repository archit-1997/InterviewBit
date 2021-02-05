
int Solution::findCount(const vector<int> &A, int B) {
    int n=A.size();
    //first check whether the target is present in the array or not
    int pos=lower_bound(A.begin(),A.end(),B)-A.begin();
    if(A[pos]==B){
        //this means that the element is present in the array
        int start=pos;
        int end=upper_bound(A.begin(),A.end(),B)-A.begin();
        return (end-start);
    }
    else 
        return 0;
}
