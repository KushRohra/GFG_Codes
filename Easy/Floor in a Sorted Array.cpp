#include <iostream>
using namespace std;
int search(int a[], int k, int n){
    int s=0, ans=-1, e=n-1, mid;
    while(s<=e){
        mid=s+(e-s)/2;
        //cout<<mid<<" "<<a[mid]<<endl;
        if(a[mid]==k)
            return mid;
        else if(a[mid]>k)
            e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,k;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<search(a,k,n)<<"\n";
    }
}
