int bin_search(int A[], int left, int right, int k)
{
    int mid;
    while(left<=right)
    {
        mid=left+(right-left);
        if(A[mid]==k)
            return mid;
        else if(A[mid]>k)
            right=mid-1;
        else left=mid+1;
    }
    return -1;
}
