bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    int n=arrive.size();
    if(K==0)
        return 0;
    int count=1;
    
    int i=1,j=0;
    
    while(i<n && j<n){
        if(arrive[i]<depart[j]){
            //this means that a guest has arrived
            count++;
            if(count>K)
                return 0;
            i++;
        }
        else if(arrive[i]==depart[j]){
            //a new person arrived and someone left also, so no problem
            i++,j++;
        }
        else{
            count--;
            j++;
        }
    }
    
    return 1;
}
