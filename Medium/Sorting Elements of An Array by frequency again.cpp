vector<int> sortByFreq(int arr[],int n) {
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    map<int,vector<int>, greater<int>> m;
    for(auto it:mp) {
        m[it.second].push_back(it.first);
    }
    for(auto it:m) {
        vector<int> v=it.second;
        sort(v.begin(), v.end());
        for(auto ele:v) {
            int temp=it.first;
            while(temp--) {
                ans.push_back(ele);
            }
        }
    }
    return ans;
}
