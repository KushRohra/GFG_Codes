#include <iostream>
using namespace std;
int bin_search(int A[], int left, int right, int k)
{
    int mid;
    while(left<=right)
    {
        mid=left+(right-left);
        if(A[mid]==k)
            return 1;
        else if(A[mid]>k)
            right=mid-1;
        else left=mid+1;
    }
    return -1;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<bin_search(a,0,n-1,k)<<endl;
    }
}
