// { Driver Code Starts
// C++ program to find minimum number of swaps
// required to sort an array
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

// } Driver Code Ends


/* You are required to complete this method */

// return the minimum number of swaps required to sort the arra
int minSwaps(int arr[], int N)
{
    int ans=0, i;
    vector<pair<int, int>> v(N);
    for(i=0;i<N;i++)
    {
        v[i].first=arr[i];
        v[i].second=i;
    }
    sort(v.begin(), v.end());
    for(i=0;i<N;i++)
    {
        if(i==v[i].second)
            continue;
        else 
        {
            swap(v[i].first, v[v[i].second].first);
            swap(v[i].second, v[v[i].second].second);
        }
        if(i!=v[i].second)
            i--;
        ans++;
    }
    return ans;
}

