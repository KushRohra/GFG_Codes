#include <bits/stdc++.h>
using namespace std;
int closestSum(int a[], int n) {
    int sum, i=0, j=n-1, ans=INT_MAX;
    while(i<j) {
        sum=a[i]+a[j];
        //cout<<sum<<" ";
        if(abs(ans)>abs(sum))
            ans=sum;
        if(sum==0)
            return 0;
        else if(sum>0)
            j--;
        else i++;
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    cout<<closestSum(a,n)<<endl;
	}
	return 0;
}
