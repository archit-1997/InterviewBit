int Solution::removeDuplicates(vector<int> &v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int ans=distance(v.begin(),unique(v.begin(),v.end()));
    return ans;
    
}
