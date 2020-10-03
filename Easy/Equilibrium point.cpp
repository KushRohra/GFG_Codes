#include <bits/stdc++.h>
using namespace std;
int findPoint(int a[], int n) {
    if(n==1)
        return 1;
    int i,suffixSum[n+1],f=0;
    suffixSum[n]=0;
    suffixSum[n-1]=a[n-1];
    for(i=n-2;i>=0;i--) 
        suffixSum[i]=a[i]+suffixSum[i+1];
    for(i=0;i<n;i++) {
        if(f==suffixSum[i+1])
            return i+1;
        f+=a[i];
    }
    return -1;
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
        cout<<findPoint(a,n)<<endl;
    }
	return 0;
}
