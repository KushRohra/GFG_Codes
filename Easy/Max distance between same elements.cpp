int maxDistance(int arr[], int n) {
    int maxDist = 0;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++) {
        if(m.find(arr[i])==m.end()) {
            m[arr[i]] = i;
        }
        else {
            maxDist = max(maxDist, i - m[arr[i]]);
        }
    }
    return maxDist;
}