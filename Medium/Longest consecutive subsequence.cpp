int findLongestConseqSubseq(int arr[], int N) {
    unordered_set<int> s;
    for(int i=0;i<N;i++)
        s.insert(arr[i]);
    int ans=INT_MIN;
    for(auto it=s.begin();it!=s.end();it++) {
        int x=*it;
        int l1=0, l2=0;
        while(s.find(x+1)!=s.end()) {
            l1++;
            s.erase(x+1);
            x++;
        }
        x=*it;
        while(s.find(x-1)!=s.end()) {
            l2++;
            s.erase(x-1);
            x--;
        }
        ans=max(ans,l1+l2+1);
    }
    return ans;
}
