
int findPivot(vector<int> v, int low,int high){
    if(low>high)
        return -1;
    
    if(low==high)
        return low;
    
    int mid=low+(high-low)/2;
    
    if(mid<high && v[mid]>v[mid+1])
        return mid;
    
    if(mid>low && v[mid]<v[mid-1])
        return mid-1;
        
    //recursively call for the left and the right part
    
    //if we are to the left of the pivot
    if(v[low]<=v[mid])
        return findPivot(v,mid+1,high);
    else
        return findPivot(v,low,mid-1);
}

int find(vector<int> v, int low,int high, int target){
    if(low>high)
        return -1;
        
    int mid=low+(high-low)/2;
    if(v[mid]==target)
        return mid;
    
    if(v[mid]>target)
        return find(v,low,mid-1,target);
    else
        return find(v,mid+1,high,target);
}

int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    //check if the array is already sorted
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        //means the array is already sorted
        int pos=lower_bound(A.begin(),A.end(),B)-A.begin();
        if(A[pos]==B)
            return pos;
        else
            return -1;
    }
    else{
        int pos=findPivot(A,0,n-1);
        int li=find(A,0,pos,B);
        if(li!=-1)
            return li;
        int ri=find(A,pos+1,n-1,B);
        if(ri!=-1)
            return ri;
        
        
        //the element is not found in the rotated and sorted array
        return -1;
    }
}
