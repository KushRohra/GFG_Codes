int missingNumber(int arr[], int n) { 
    int i,size=n;
    bool check[size];
    memset(check,0,sizeof(check));
    for(i=0;i<n;i++)
        if(arr[i]>=1 && arr[i]<=size)
            check[arr[i]-1]=1;
    for(i=0;i<n;i++)
        if(check[i]==0)
            return i+1;
    return n+1;
} 
