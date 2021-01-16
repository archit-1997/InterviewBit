vector<vector<int> > Solution::squareSum(int A) {
    vector<vector<int> > ans;
    for (int a = 1; a * a <=A; a++) {
        for (int b = 1; b<=a; b++) {
            if (((a * a) + (b * b)) == A) {
                vector<int> newEntry; 
                newEntry.push_back(a);
                newEntry.push_back(b);
                if(newEntry[0]>newEntry[1])
                    swap(newEntry[0],newEntry[1]);
                ans.push_back(newEntry);
            }
        }
    }
    return ans;
}

