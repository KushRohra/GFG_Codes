vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    vector<int> v;
    int i=0, j=0, x;
    while(i<n && j<m) {
        if(arr1[i]==arr2[j]) {
            x=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
            x=arr1[i++];
        else x=arr2[j++];
        if(v.size()==0)
            v.push_back(x);
        else if(v[v.size()-1]!=x)
                v.push_back(x);
    }
    while(i<n) {
        x=arr1[i++];
        if(v.size()==0)
            v.push_back(x);
        else if(v[v.size()-1]!=x)
            v.push_back(x);
    }
    while(j<m) {
        x=arr2[j++];
        if(v.size()==0)
            v.push_back(x);
        else if(v[v.size()-1]!=x)
            v.push_back(x);
    }
    return v;
}
