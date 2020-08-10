int transitionPoint(int arr[], int n) {
    if(arr[0]==1)
        return 0;
    if(arr[n-1]==0)
        return -1;
    int mid,s=0,e=n-1,ans;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==1)
        {
            e=mid-1;
            ans=mid;
        }
        else s=mid+1;
    }
    return ans;
}
