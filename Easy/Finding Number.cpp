#include <iostream>
using namespace std;
int findtransition(int a[], int n) {
    int s=0,e=n-1,mid;
    while(s<=e) {
        mid=(e-s)/2+s;
        if(mid==0 && a[mid]>a[mid+1])
            return 0;
        else if(mid==n-1 && a[mid]>a[mid-1])
            return n-1;
        else if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
            return mid;
        if(a[mid]<a[mid+1])
            s=mid+1;
        else e=mid-1;
    }
    return e;
}
int findInc(int a[], int s, int e, int x) {
    int mid;
    while(s<=e) {
        mid=(e-s)/2+s;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int findDec(int a[], int s, int e, int x) {
    int mid;
    while(s<=e) {
        mid=(e-s)/2+s;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            s=mid+1;
        else e=mid-1;
    }
    return -1;
}
int find(int a[], int n, int x) {
    int find,mid=findtransition(a,n);
    if(a[mid]==x)
        return mid;
    find=findInc(a,0,mid-1,x);
    if(find!=-1)
        return find;
    else find=findDec(a,mid+1,n-1,x);
    return find;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int i,x,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>x;
        cout<<find(a,n,x)<<endl;
    }
	return 0;
}
