
vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size();
    //check for descending order
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(A[i]<A[i+1]){
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        //return in sorted order if the array is sorted in descending order
        sort(A.begin(),A.end());
        return A;
    }
    
    //check for ascending
    flag=0;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        //just swap the last two elements
        swap(A[n-2],A[n-1]);
        return A;
    }
    
    //now the array is neither in ascending nor in descending order
    //from the right side, search for an element which is smaller than the element on it's right side
    int right;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            right=i;
            break;
        }
    }
    
    int left=right+1;
    //search from left to right for the next greater element greater than the element on index right
    int small=A[left];
    for(int i=left+1;i<n;i++){
        if(A[i]<small && A[i]>A[right]){
            left=i;
            small=A[i];
        }
    }
    
    //swap the two elements
    swap(A[left],A[right]);
    //sort all the elements from right+1 index
    sort(A.begin()+right+1,A.end());
    
    return A;
}
