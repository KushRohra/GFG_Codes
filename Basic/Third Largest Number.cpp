// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
long long thirdLargest(long long a[],long long n);
 
int main()
{int t;
cin>>t;
while(t--)
{
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<thirdLargest(a,n)<<endl;
}
}// } Driver Code Ends


 /* The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  */
long long thirdLargest(long long a[], long long n)
{
    long long int first=a[0], second=INT_MIN, third=INT_MIN, i;
    for(i=1;i<n;i++)
    {
        if(a[i]>first)
        {
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second)
        {
            third=second;
            second=a[i];
        }
        else if(a[i]>third)
        {
            third=a[i];
        }
    }
    if(third==INT_MIN)
        return -1;
    return third;
}
