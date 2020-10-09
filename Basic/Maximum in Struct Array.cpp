int findMax(Height arr[], int n) {
    int height,maxHeight=INT_MIN;
    for(int i=0;i<n;i++) {
        height=arr[i].feet*12+arr[i].inches;
        maxHeight=max(height,maxHeight);
    }
    return maxHeight;
}
