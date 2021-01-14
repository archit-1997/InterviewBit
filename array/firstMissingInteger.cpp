int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size(),containsOne=0;
for(int i=0;i<n;i++){
if(A[i]==1){
containsOne = 1;
}else if(A[i]<=0 || A[i]>n){
A[i] = 1;
}
}
if(containsOne == 0) return 1;
for(int i=0;i<n;i++){
int index = abs(A[i]) - 1;
if(A[index] > 0){
A[index] = - A[index];
}
}
for(int i=0;i<n;i++){
if(A[i] > 0){
return i+1;
}
}
return n+1;
    
}
