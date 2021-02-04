
int binToDecimal(string s){
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            int val=pow(2,i);
            ans+=val;
        }
    }
    return ans;
}
int Solution::solve(int A) {
    queue<string> q;
    q.push("1");
    int count=0;
    string s="";
    while(1){
        count++;
        s=q.front();
        q.pop();
        if(count==A)
            break;
        
        int len=s.size();
        if(len%2==0){
            // if the size is even
            int pos=len/2;
            string first=s.substr(0,pos),last=s.substr(pos);
            string t1=first+'0'+last;
            string t2=first+'1'+last;
            q.push(t1);
            q.push(t2);
        }
        else{
            int pos=len/2;
            char mid=s[pos];
            string first=s.substr(0,pos+1),last=s.substr(pos+1);
            string t=first+mid+last;
            q.push(t);
        }
        
    }
    
    int ans=binToDecimal(s);
    return ans;
}
